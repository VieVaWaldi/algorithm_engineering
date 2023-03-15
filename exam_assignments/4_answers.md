# Exam Assignment 4

Sorry I just realized this text is in german and I dont know why. Sometimes I mix up these languages because I have to talk english in my job. You are speaking german so I hope its okay that I am not translating it.

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

4. **Read What every systems programmer should know about concurrency: https://assets.bitbashing.io/papers/concurrencyprimer.pdf Discuss two things you find particularly interesting.**

    1. Atomicity: Hier fand ich die Bedeutsamkeit von atmoren Variablen an sich sehr interessant. Und, dass so Operationen geschützt werden können, dadurch dass sie nicht in kleinere Stücke aufgeteilt werden können.Beziehungsweise das es zu unbrauchbaren Daten kommt bei den sogenannten "torns". 

    2. Atomic Fusion: Interessant ist, dass atomare Operationen Code nicht immun gegenüber allen Optimierungen macht. Besonders in dem Beispiel in dem die ausgerollte Schleife unerwartet oft asugeführt wird.
