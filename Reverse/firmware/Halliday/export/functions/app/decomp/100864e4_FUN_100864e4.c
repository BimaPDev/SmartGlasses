/* FUN_100864e4 @ 0x100864e4 */

undefined4 FUN_100864e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined1 auStack_2c [24];
  undefined4 local_14;
  
  FUN_1011ea48(auStack_3c,0,0x2c);
  FUN_1013ca1a(auStack_2c,0,1);
  local_34 = 1;
  local_38 = param_2;
  local_30 = param_3;
  local_14 = param_1;
  FUN_10115464();
  local_33 = FUN_1013cd52();
  FUN_1013c96e(DAT_1008655c,auStack_3c);
  iVar1 = FUN_1011dbde(auStack_2c,0xffffffff);
  if (iVar1 == -0xb) {
    FUN_100a5b78((DAT_10086564 - DAT_10086560) * 0x20 & 0xff00U | 0xa30011,DAT_1008656c,DAT_10086568
                );
    uVar2 = 0xfffffff5;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

