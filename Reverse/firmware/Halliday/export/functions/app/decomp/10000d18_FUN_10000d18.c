/* FUN_10000d18 @ 0x10000d18 */

void FUN_10000d18(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_10000d34;
  *(undefined4 *)(DAT_10000d38 + 0x2e0) = *DAT_10000d34;
  puVar2 = DAT_10000d3c;
  *DAT_10000d3c = 1;
  *puVar1 = 0x1040;
  *puVar2 = 1;
  return;
}

