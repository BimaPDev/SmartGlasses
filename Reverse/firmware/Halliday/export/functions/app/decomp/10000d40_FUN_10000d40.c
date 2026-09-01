/* FUN_10000d40 @ 0x10000d40 */

void FUN_10000d40(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_10000d58;
  if (*(int *)(DAT_10000d54 + 0x2f0) != 0) {
    *DAT_10000d58 = 0x1000;
    puVar1[1] = 0x1000;
  }
  return;
}

