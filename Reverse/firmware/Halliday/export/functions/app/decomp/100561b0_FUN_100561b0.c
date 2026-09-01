/* FUN_100561b0 @ 0x100561b0 */

int FUN_100561b0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_100561e4;
  iVar4 = FUN_1005608c();
  uVar3 = DAT_100561f4;
  uVar2 = DAT_100561f0;
  if (*piVar1 == 0) {
    iVar5 = DAT_100561ec - DAT_100561e8;
    *piVar1 = *(int *)(*(int *)(iVar4 + 0x4c) + 0x14);
    FUN_100a5b78(iVar5 * 0x20 & 0xff00U | 0x14c0031,uVar3,uVar2);
  }
  return *piVar1;
}

