/* FUN_1005e420 @ 0x1005e420 */

void FUN_1005e420(void)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  piVar2 = DAT_1005e458;
  pcVar4 = *(code **)(*(int *)(*DAT_1005e458 + 0x3c) + 0x18);
  if ((pcVar4 != (code *)0x0) &&
     (pbVar1 = (byte *)((int)DAT_1005e458 + 0x31e),
     *(byte *)(DAT_1005e458 + 0x24) = *(byte *)(DAT_1005e458 + 0x24) & 0xfe | *pbVar1 & 1,
     *pbVar1 == 0)) {
    iVar3 = (*pcVar4)(DAT_1005e45c);
    *(byte *)(piVar2 + 0x24) = *(byte *)(piVar2 + 0x24) & 0xfd | (iVar3 != 0) << 1;
  }
  return;
}

