/* FUN_2c5d3a14 @ 0x2c5d3a14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d3a14(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_17;
  int iStack_14;
  
  iStack_14 = *_LAB_2c5d3af8;
  FUN_2c5d7694(8,param_2,1,0);
  if (param_2 == 1) {
    FUN_2c674268(auStack_58,0,0x44);
    uStack_44 = _LAB_2c5d3b00;
    uStack_40 = _LAB_2c5d3afc;
    uStack_54 = FUN_2c5e2e8c(_LAB_2c5d3b04);
    uStack_3c = 0x1059;
    uStack_38 = 0x1060;
    uStack_2c = _LAB_2c5d3b08;
    uStack_34 = 0x1063;
    uStack_17 = 2;
    uStack_30 = (char)param_2;
    FUN_2c5e8f4c(auStack_58);
    uVar1 = FUN_2c62bdd8(_LAB_2c5d3b0c,1000,param_1);
    FUN_2c62be70(uVar1,1);
  }
  else if (param_2 == 2) {
    FUN_2c674268(auStack_58,0,0x44);
    uStack_40 = _LAB_2c5d3afc;
    uStack_44 = _LAB_2c5d3b00;
    uStack_54 = FUN_2c5e2e8c(_LAB_2c5d3b04);
    uStack_30 = 1;
    uStack_38 = 0x1062;
    uStack_3c = 0x1061;
    uStack_2c = _LAB_2c5d3b08;
    uStack_34 = 0x1063;
    uStack_17 = (char)param_2;
    FUN_2c5e8f4c(auStack_58);
    uVar1 = FUN_2c62bdd8(_LAB_2c5d3b10,1000,param_1);
    FUN_2c62be70(uVar1,1);
  }
  if (*_LAB_2c5d3af8 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

