#include <iostream>
#include <string>
#include <chrono>
#include <cstdlib>

namespace bettercpp
{
    class TearRuntime
    {
    private:
        std::string targetCommand;

        void logStatus(const std::string& state, const std::string& info)
        {
            std::cout << "[TEAR-RUNTIME][" << state << "] " << info << std::endl;
        }

    public:
        TearRuntime(const std::string& cmd)
        {
            targetCommand = cmd;
        }

        void executeAndAnalyze()
        {
            std::cout << "==================================================" << std::endl;
            std::cout << " TEAR: Terminal Execution & Analysis Runtime" << std::endl;
            std::cout << "==================================================" << std::endl;

            logStatus("INIT", "Preparing sandbox for command: " + targetCommand);

            auto startTime = std::chrono::high_resolution_clock::now();

            int exitCode = std::system(targetCommand.c_str());

            auto endTime = std::chrono::high_resolution_clock::now();
            auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();

            std::cout << "--------------------------------------------------" << std::endl;
            
            if (exitCode == 0)
            {
                logStatus("SUCCESS", "Process finished with code: 0");
            }
            else
            {
                logStatus("WARN", "Process terminated with non-zero exit code: " + std::to_string(exitCode));
            }

            logStatus("ANALYSIS", "Total execution time yielded: " + std::to_string(elapsedTime) + " ms");
            std::cout << "==================================================" << std::endl;
        }
    };
}

int main(int argc, char* argv[])
{
    std::string commandToRun = "echo 'TEAR Runtime Active'";

    if (argc > 1)
    {
        commandToRun = argv[1];
    }

    bettercpp::TearRuntime runtime(commandToRun);
    runtime.executeAndAnalyze();

    return 0;
}
