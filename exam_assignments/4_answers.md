# Exam Assignment 4

1. **Explain how divide and conquer algorithms can be
parallelized with tasks in OpenMP.**

    * Die Parallelsierung von divide and conquer can mit der Hilfe von Tasks erreicht werden. Tasks erlauben das Programm in kleinere unabhängige Teile aufzuteilen, welche parallel von mehreren Threads bearbeitet werden könne. Die Ergebnisse der Taksks müssen wieder kombiniert werden.
    <br>

2. **Describe some ways to speed up merge sort.**

    * Eine Hälfte des Arrays wird einem und die andere Hälfte einer zweiten CPU oder einem zweitem Thread zugewiesen. Die Parallelsierung ist fertig wenn eine CPU nur noch ein Datum hat. Der Elternknoten erhält beide Ergebnisse und merget diese. Die Daten werden solange nach oben gegeben und so sortiert bis es nur noch eine CPU gibt.
    <br>

3. **What is the idea behind multithreaded merging?**

    * Hierbei handelt es sich darum mehrere Threads auf einer einzelnen CPU laufen zu lassen. Dabei werden spezifische Probleme eines Algorithmus auf individuelle sub-threads ausgelagert welche parallel zueinander laufen.
    <br>

4. **Warmup for slide 17 in `/warmup`.**

    <br>

5. **Read What every systems programmer should know about
concurrency: https://assets.bitbashing.io/papers/concurrencyprimer.pdf
Discuss two things you find particularly interesting.**

    *