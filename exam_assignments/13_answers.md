# Exam Assignment 13

1. **Delimit from each other the following SSD parts: Cells,
Pages and Blocks.**

    * A cell is the smallest unit of storage, consisting of a single transistor that can be switched off or on.
    * A page is a collection of cells that will be erased together.
    * A block is a group of pages. These are used as single units for programming operations.
    <br>

2. **What is the purpose of garbage collection in SSDs?**

    * When data is written to an SSD, it is first stored in a page, but a page cannot be rewritten without first erasing the entire block that contains it. This means that whenever a change is made to a page, the entire block must be erased, modified, and rewritten to a new block.
    * Garabge collection enables efficient data writing and deletion of incorrect information.
    <br>

3. **What is the purpose of wear leveling in SSDs?**

    * The purpose of wear leveling in SSDs is to distribute writes evenly across all available cells to prevent some cells from wearing out faster than others. This helps to ensure that the SSD has a longer lifespan and maintains consistent performance over time.
    <br>

4. **Tell some interesting things about SSDs with an M.2 form factor.**

    1. M.2 SSDs are incredibly compact and offer fast read and write speeds. They are designed to be installed directly onto the motherboard of a computer or laptop, which can help to save space and reduce cable clutter.

    2. They support both SATA and PCIe interfaces, which means that they can be used with a wide range of devices, including laptops, desktops, and gaming consoles.
    <br>

5. **What influence do garbage collection and wear leveling have on write amplification of an SSD?**

    * Garbage collection can increase write amplification by requiring more data to be written during the cleaning process, while wear leveling helps to reduce write amplification by spreading out writes more evenly across the drive.
    <br>

6. **Discuss three different recommendations for writing code for SSDs.**

    1. SSDs can handle many IO requests in parallel, which means that using asynchronous IO can help to improve performance by allowing the CPU to continue processing other tasks while waiting for the SSD to complete an IO request.

    2. SSDs have a limited number of write cycles, so minimizing the number of writes can help to extend the lifespan of the drive. This can be achieved by optimizing code to avoid unnecessary writes, such as using memory buffers to consolidate multiple small writes into a single larger write.

    3. SSDs have a page size that varies depending on the drive model, and writing data that is not aligned with page boundaries can result in additional write amplification and reduced performance. Aligning data structures with page boundaries can help to reduce write amplification and improve performance.
    <br>

7. **How could the CPU load for IO be reduced?**

    * The CPU load for IO can be reduced by using techniques such as asynchronous IO or offloading IO operations to dedicated hardware, such as a storage controller. By doing so, the CPU can focus on other tasks while waiting for the IO operation to complete, which can help to improve overall performance.
    <br>

8. **How could you solve problems that do not fit in DRAM without major code adjustments?**

    * One approach to solving problems that do not fit in DRAM without major code adjustments is to use memory-mapped files. Memory-mapped files allow data to be stored on disk while still being accessible as if it were in memory, which can help to avoid major code changes while still allowing for efficient processing of large datasets.
    <br>
