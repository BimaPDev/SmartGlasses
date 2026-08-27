/* FUN_1405c838 @ 0x1405c838 */

void FUN_1405c838(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  code *pcVar3;
  
  iVar1 = *(int *)(param_2 + 0x18);
  pcVar3 = *(code **)(param_2 + 0xc);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined2 *)((uint)*(ushort *)(iVar1 + 6) + iVar1 + 0x30);
    FUN_140735a8();
  }
  (*pcVar3)(param_1,*(undefined4 *)(param_2 + 0x10),param_3,*(undefined2 *)(param_2 + 0x1c),uVar2);
  return;
}

