/* FUN_2c5ad63c @ 0x2c5ad63c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ad63c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [124];
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [124];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 *puVar5;
  
  iStack_14 = *_LAB_2c5ad78c;
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ad7a0,0xd8,_LAB_2c5ad79c,_LAB_2c5ad798);
  }
  FUN_2c5abf68();
  FUN_2c5acf48();
  uStack_d4 = _LAB_2c5ad790;
  uStack_d0 = 0xffffffff;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_2c674268(auStack_ac,0,0x7c);
  uStack_28 = 0;
  uStack_18 = 0;
  uStack_24 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x2c5b53f0(param_2,&uStack_d4);
  iVar1 = FUN_2c5abf68();
  *(undefined4 *)(iVar1 + 8) = uStack_d0;
  *(undefined4 *)(iVar1 + 0xc) = uStack_cc;
  *(undefined4 *)(iVar1 + 0x10) = uStack_c8;
  *(undefined4 *)(iVar1 + 0x14) = uStack_c4;
  *(undefined4 *)(iVar1 + 0x18) = uStack_c0;
  *(undefined4 *)(iVar1 + 0x1c) = uStack_bc;
  *(undefined4 *)(iVar1 + 0x20) = uStack_b8;
  *(undefined4 *)(iVar1 + 0x24) = uStack_b4;
  puVar3 = (undefined1 *)(iVar1 + 0x28);
  puVar5 = &uStack_b0;
  do {
    puVar4 = (undefined4 *)((int)puVar5 + 1);
    *puVar3 = *(undefined1 *)puVar5;
    puVar3 = puVar3 + 1;
    puVar5 = puVar4;
  } while (&uStack_30 != puVar4);
  *(undefined4 *)(iVar1 + 0xa8) = uStack_30;
  puVar3 = (undefined1 *)((int)&uStack_30 + 3);
  puVar6 = (undefined1 *)(iVar1 + 0xac);
  do {
    puVar3 = puVar3 + 1;
    puVar7 = puVar6 + 1;
    *puVar6 = *puVar3;
    puVar6 = puVar7;
  } while (puVar7 != (undefined1 *)(iVar1 + 0xb6));
  *(undefined4 *)(iVar1 + 0xb8) = uStack_20;
  uStack_174 = 0;
  *(undefined4 *)(iVar1 + 0xbc) = uStack_1c;
  *(undefined4 *)(iVar1 + 0xc0) = uStack_18;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_188 = _LAB_2c5ad794;
  uStack_17c = 0;
  uStack_178 = 0;
  FUN_2c674268(auStack_170,0,0x7c);
  uStack_d8 = 0xffffffff;
  uStack_ec = 0;
  uStack_dc = 0;
  uStack_e8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  FUN_2c5b53f8(param_2,&uStack_188);
  func_0x2c5b2708(*(undefined4 *)(param_1 + 8),(int)(char)uStack_d0,&uStack_188);
  FUN_2c5b27dc(*(undefined4 *)(param_1 + 8),uStack_c8);
  uVar2 = FUN_2c5af03c();
  func_0x2c5af198(uVar2,uStack_c4);
  FUN_2c5abf68();
  FUN_2c5ac4f4();
  if (*_LAB_2c5ad78c == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

