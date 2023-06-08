#include <iostream>
#include <chrono>
#include <cstdlib>

int main()
{
    std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();

    // use la herramienta "perf" para medir las fallas de cache durante la ejecucion de la aplicacion
    std::string command = "perf stat -e cache-misses ";
    command += "libreoffice --writer";

    std::system(command.c_str());

    std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();

    // Calcular la diferencia horaria y la latencia en milisegundos 
    std::chrono::duration<double, std::milli> time_span = t2 - t1;
    double latency = time_span.count();
    double cycles = latency * 1000000;

    std::cout << "Latencia: " << latency << " milisegundos" << std::endl;
    std::cout << "Ciclos de reloj tomados: " << cycles << std::endl;

    return 0;
}

