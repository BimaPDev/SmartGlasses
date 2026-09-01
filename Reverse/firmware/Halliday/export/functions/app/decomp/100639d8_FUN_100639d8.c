/* FUN_100639d8 @ 0x100639d8 */

bool FUN_100639d8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    thunk_FUN_1011ea48(param_1,0,0x70);
    uVar2 = DAT_10063a1c;
    uVar1 = DAT_10063a14;
    *param_1 = DAT_10063a18;
    param_1[1] = uVar1;
    uVar3 = DAT_10063a24;
    uVar1 = DAT_10063a20;
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    uVar1 = DAT_10063a28;
    param_1[4] = uVar3;
    param_1[5] = uVar1;
    iVar4 = DAT_10063a2c;
    param_1[6] = DAT_10063a2c;
    param_1[7] = iVar4 + 0x3c5cf36e;
  }
  return param_1 != (undefined4 *)0x0;
}

