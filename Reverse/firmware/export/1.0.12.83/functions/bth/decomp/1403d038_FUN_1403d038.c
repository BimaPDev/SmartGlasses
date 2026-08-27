/* FUN_1403d038 @ 0x1403d038 */

undefined4 * FUN_1403d038(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 auStack_64 [3];
  undefined1 local_61;
  undefined1 auStack_5c [3];
  undefined1 local_59;
  undefined1 auStack_54 [3];
  undefined1 local_51;
  undefined1 auStack_4c [3];
  undefined1 local_49;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  int local_2c;
  
  local_2c = *DAT_1403d174;
  puVar4 = (undefined4 *)FUN_1404a1b4(param_2,param_2,param_3,0);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    uVar8 = 0;
    local_61 = 0;
    uVar6 = 0;
    uVar7 = 0;
    local_59 = 0;
    uVar9 = 0;
    local_51 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar1 = 0;
    local_49 = 0;
    uVar3 = uVar8;
  }
  else {
    iVar5 = FUN_14097610(param_2 & 0xff);
    local_44 = *puVar4;
    uVar7 = *(undefined1 *)((int)puVar4 + 0xde);
    uVar8 = *(undefined1 *)((int)puVar4 + 0xda);
    uVar11 = *(undefined1 *)((int)puVar4 + 0xd9);
    uVar12 = *(undefined1 *)(iVar5 + 0x27);
    local_40 = CONCAT22(local_40._2_2_,(short)puVar4[1]);
    uVar3 = FUN_14098188(puVar4[0x35]);
    uVar1 = *(undefined1 *)((int)puVar4 + 0xdb);
    uVar10 = *(undefined1 *)(puVar4 + 0x36);
    FUN_14097ebc(auStack_4c,puVar4[0x35]);
    FUN_14097ee8(auStack_54,puVar4[0x35]);
    FUN_14097f14(auStack_5c,puVar4[0x35]);
    FUN_14097f40(auStack_64,puVar4[0x35]);
    uVar14 = *(undefined1 *)(iVar5 + 0xed);
    uVar13 = *(undefined1 *)(iVar5 + 0xee);
    uVar6 = *(undefined1 *)(iVar5 + 0x90);
    uVar9 = *(undefined1 *)(iVar5 + 0xef);
  }
  local_40 = CONCAT13(uVar8,CONCAT12(uVar7,(undefined2)local_40));
  local_3c = CONCAT13(uVar10,CONCAT12(uVar3,CONCAT11(uVar11,uVar12)));
  local_38 = CONCAT13(local_59,CONCAT12(local_51,CONCAT11(local_49,uVar1)));
  local_34 = CONCAT13(uVar6,CONCAT12(uVar13,CONCAT11(uVar14,local_61)));
  *param_1 = local_44;
  param_1[3] = local_38;
  piVar2 = DAT_1403d174;
  *(undefined1 *)(param_1 + 5) = uVar9;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  param_1[4] = local_34;
  if (*piVar2 == local_2c) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

