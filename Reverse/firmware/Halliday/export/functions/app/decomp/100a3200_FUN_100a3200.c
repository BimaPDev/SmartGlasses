/* FUN_100a3200 @ 0x100a3200 */

undefined4 FUN_100a3200(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  uVar1 = thunk_FUN_10115958();
  if (49999 < uVar1) {
    uVar1 = FUN_1007a430();
    uVar2 = FUN_1007a568();
    if (param_1 != 0) {
      uVar2 = 0;
      uVar1 = 0;
    }
    FUN_10119dc2(DAT_100a3288,uVar1,uVar2);
    if (uVar1 < 0xce9) {
      uVar1 = 0xce9;
    }
    FUN_10118a1c(&iStack_20,8,DAT_100a328c,uVar1 & 0xffff);
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    FUN_10118a1c(&uStack_18,8,DAT_100a328c,uVar2 & 0xffff);
    iVar3 = FUN_1011ea10(&iStack_20);
    thunk_FUN_1009efe8(DAT_100a3290,&iStack_20,iVar3 + 1);
    FUN_1012d1ae(DAT_100a3290);
    iVar3 = FUN_1011ea10(&uStack_18);
    thunk_FUN_1009efe8(DAT_100a3294,&uStack_18,iVar3 + 1);
    FUN_1012d1ae(DAT_100a3294);
  }
  return 0;
}

