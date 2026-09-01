/* FUN_100d5b04 @ 0x100d5b04 */

undefined4 FUN_100d5b04(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)*DAT_100d5b98;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      FUN_100a5b78(DAT_100d5ba4 | (DAT_100d5ba0 - DAT_100d5b9c) * 0x20 & 0xff00U,DAT_100d5bac,
                   DAT_100d5ba8);
      return 0xffffffed;
    }
    uVar2 = (uint)*(byte *)(piVar3 + 0xe);
    if (((((int)(uVar2 << 0x1f) < 0) && (param_1 == piVar3[3])) && (-1 < (int)(uVar2 << 0x18))) &&
       ((*(byte *)(piVar3 + 0xe) & 0x70) == 0)) break;
    piVar3 = (int *)*piVar3;
  }
  iVar1 = FUN_100d45f8(param_1,(uVar2 & 0x7f) >> 4,uVar2 << 0x18,uVar2,param_4);
  if (iVar1 == 0) {
    *(byte *)((int)piVar3 + 0x3a) = *(byte *)((int)piVar3 + 0x3a) | 2;
    return 0;
  }
  if (((*(byte *)((int)piVar3 + 0x3a) & 1) != 0) ||
     (-1 < (int)((uint)*(byte *)(iVar1 + 0x3a) << 0x1f))) {
    *(byte *)((int)piVar3 + 0x3a) =
         *(byte *)((int)piVar3 + 0x3a) & 0xfd | (byte)((param_2 & 1) << 1);
    *(byte *)(iVar1 + 0x3a) = *(byte *)(iVar1 + 0x3a) & 0xfd | (param_2 == 0) << 1;
  }
  return 0;
}

