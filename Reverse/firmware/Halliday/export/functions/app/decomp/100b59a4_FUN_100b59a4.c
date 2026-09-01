/* FUN_100b59a4 @ 0x100b59a4 */

undefined4 * FUN_100b59a4(code *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (DAT_100b5a38 - DAT_100b5a34) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0xa80031,DAT_100b5a40,DAT_100b5a3c,DAT_100b5a34,param_4);
  puVar3 = (undefined4 *)thunk_FUN_1009f30c(0x18,DAT_100b5a44);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_100a5b78(uVar5 | 0xac0011,DAT_100b5a40,DAT_100b5a48);
  }
  else {
    FUN_1011ea48(puVar3,0,0x18);
    puVar3[5] = *param_2;
    uVar2 = DAT_100b5a50;
    uVar1 = DAT_100b5a4c;
    puVar3[1] = 1;
    *puVar3 = uVar1;
    puVar3[2] = param_1;
    iVar4 = FUN_1012da4a(uVar2);
    if ((iVar4 == 0) || (iVar4 = FUN_100b5864(puVar3[5]), iVar4 == 0)) {
      FUN_1012d1f4(puVar3);
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_100a5b78(uVar5 | 0xb80031,DAT_100b5a40,DAT_100b5a54,puVar3[5]);
      (*param_1)(puVar3,1,1);
    }
  }
  return puVar3;
}

