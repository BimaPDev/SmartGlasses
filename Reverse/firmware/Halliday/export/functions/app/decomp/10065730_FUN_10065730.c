/* FUN_10065730 @ 0x10065730 */

undefined4
FUN_10065730(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
            undefined2 param_9,undefined2 param_10)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_10065824;
  FUN_1011dbf4(DAT_10065828,0xffffffff);
  FUN_1011ea48(puVar1 + 2,0,0xec);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  iVar2 = FUN_10065f58(puVar1,1);
  if (iVar2 == 0) {
    puVar1[0xb] = param_4;
    *(undefined2 *)(puVar1 + 8) = param_7;
    puVar1[5] = 0;
    *(undefined2 *)((int)puVar1 + 0x22) = param_8;
    *(undefined2 *)(puVar1 + 9) = param_9;
    *(undefined2 *)((int)puVar1 + 0x26) = param_10;
    *(undefined2 *)(puVar1 + 10) = param_6;
    *(undefined1 *)((int)puVar1 + 0x2a) = param_5;
    iVar2 = *param_1;
    puVar1[6] = puVar1[6] + 0x1ff & 0xfffffe00;
    iVar2 = (**(code **)(*(int *)(iVar2 + 8) + 8))(iVar2,puVar1 + 4);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)(*param_1 + 8) + 0x14))();
      uVar3 = 0;
      if (iVar2 != 0) {
        FUN_100a5b78((DAT_10065830 - DAT_1006582c) * 0x20 & 0xff00U | 0x5d0011,DAT_10065838,
                     DAT_10065840,iVar2);
        uVar3 = 0xfffffffd;
      }
    }
    else {
      FUN_100a5b78((DAT_10065830 - DAT_1006582c) * 0x20 & 0xff00U | 0x560011,DAT_10065838,
                   DAT_1006583c,iVar2);
      uVar3 = 0xfffffffe;
    }
  }
  else {
    FUN_100a5b78((DAT_10065830 - DAT_1006582c) * 0x20 & 0xff00U | 0x440011,DAT_10065838,DAT_10065834
                 ,iVar2);
    uVar3 = 0xffffffff;
  }
  thunk_FUN_10113e2c(DAT_10065828);
  return uVar3;
}

