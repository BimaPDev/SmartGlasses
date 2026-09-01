/* FUN_100d0c74 @ 0x100d0c74 */

int FUN_100d0c74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                undefined1 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 auStack_53 [3];
  undefined4 uStack_50;
  undefined1 auStack_4c [9];
  undefined1 auStack_43 [16];
  undefined1 local_33;
  undefined1 auStack_32 [6];
  undefined1 local_2c;
  undefined1 auStack_2b [11];
  
  puVar2 = &local_58;
  puVar7 = DAT_100d0d3c;
  do {
    puVar6 = puVar7;
    puVar5 = puVar2;
    uVar4 = puVar6[1];
    puVar7 = puVar6 + 2;
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    puVar2 = puVar5 + 2;
  } while (puVar7 != DAT_100d0d3c + 0xc);
  uVar1 = *(undefined1 *)(puVar6 + 3);
  puVar5[2] = *puVar7;
  *(undefined1 *)(puVar5 + 3) = uVar1;
  FUN_100d08f0(auStack_78,param_1,0x20);
  iVar3 = FUN_101354b6(DAT_100d0d40,auStack_78,0x20,auStack_88);
  if (iVar3 == 0) {
    FUN_100d08f0(auStack_53,param_2,0x10);
    FUN_100d08f0(auStack_43,param_3,0x10);
    local_33 = *param_4;
    FUN_100d08f0(auStack_32,param_4 + 1,6);
    local_2c = *param_5;
    FUN_100d08f0(auStack_2b,param_5 + 1,6);
    iVar3 = FUN_101354b6(auStack_88,&local_58,0x35,param_6);
    if (iVar3 == 0) {
      FUN_101355fe(param_6);
      local_58._0_1_ = 1;
      iVar3 = FUN_101354b6(auStack_88,&local_58,0x35,param_7);
      if (iVar3 == 0) {
        FUN_101355fe(param_7);
      }
    }
  }
  return iVar3;
}

