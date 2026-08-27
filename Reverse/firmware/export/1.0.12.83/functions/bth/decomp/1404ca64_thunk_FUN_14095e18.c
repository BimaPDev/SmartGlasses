/* thunk_FUN_14095e18 @ 0x1404ca64 */

undefined4 thunk_FUN_14095e18(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_14095e54;
  uVar4 = 0;
  if (param_1 != 0) {
    FUN_140e5148(*DAT_14095e54,0xffffffff);
    iVar2 = FUN_1404a1b4(0);
    if ((*(char *)(iVar2 + 6) == '\0') || (iVar3 = FUN_140db784(iVar2,param_1,6), iVar3 != 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar2 + 0xc);
    }
    FUN_140e52d8(*puVar1);
  }
  return uVar4;
}

