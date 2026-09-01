/* FUN_1005c180 @ 0x1005c180 */

void FUN_1005c180(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_1005c1a8;
  piVar1 = DAT_1005c1a4;
  iVar4 = *DAT_1005c1a4;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar3 = *(int *)(iVar2 + iVar4 * 4);
    (**(code **)(iVar3 + 0x18))(iVar3,6);
  }
  *piVar1 = 0;
  return;
}

