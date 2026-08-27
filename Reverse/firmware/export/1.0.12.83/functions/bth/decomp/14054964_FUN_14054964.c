/* FUN_14054964 @ 0x14054964 */

void FUN_14054964(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_14057d20(param_3);
  if (iVar1 == 0) {
    return;
  }
  if (param_1 == 0) {
    iVar2 = FUN_140db784(param_2,iVar1 + 0xa4,0x10);
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_14054994;
    }
    uVar3 = 0x6b;
  }
  else {
    uVar3 = 0x4c;
  }
  FUN_14059838(iVar1,0xb);
LAB_14054994:
  FUN_14057df0(iVar1,0xf,uVar3);
  return;
}

