# Uncommon C Pointer Arithmetic Bug

This repository demonstrates a subtle bug in C related to pointer arithmetic. The code appears correct at first glance but can lead to unexpected behavior or crashes depending on the context.  This example focuses on a specific scenario where a seemingly innocent pointer assignment hides a potential problem. The solution explains how to avoid this issue.

## Bug Description

The bug lies in the potential for undefined behavior if the pointer isn't properly managed.  While simple in this isolated example, in larger programs, similar errors can cause memory corruption or segmentation faults.   The main issue stems from potentially incorrect assumptions about memory layout.