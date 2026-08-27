/* FUN_2c54ec88 @ 0x2c54ec88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54ec88(int param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined1 auStack_3c [4];
  uint uStack_38;
  uint *puStack_34;
  uint uStack_30;
  uint auStack_2c [4];
  uint uStack_1c;
  
  uStack_1c = *_LAB_2c54ede8;
  puVar6 = param_2;
  if (param_1 != 0) {
    uVar7 = FUN_2c54ee98(param_1,_LAB_2c54edec,auStack_3c,1);
    uVar1 = _LAB_2c54edf0;
    puVar6 = (uint *)((ulonglong)uVar7 >> 0x20);
    if (-1 < (int)uVar7) {
      *(undefined1 *)((int)param_2 + 0x1d) = auStack_3c[0];
      uVar1 = FUN_2c48e42c(param_1,uVar1);
      iVar2 = FUN_2c48e86c();
      if ((iVar2 == 0) && (iVar2 = FUN_2c48e85c(uVar1), iVar2 == 0)) {
        uVar7 = FUN_2c48e84c(uVar1);
        uVar1 = _LAB_2c54edf0;
        puVar6 = (uint *)((ulonglong)uVar7 >> 0x20);
        iVar2 = 0;
        if ((int)uVar7 != 0) {
          *(undefined1 *)(param_2 + 7) = 1;
          uVar7 = FUN_2c54f0ec(param_1,uVar1,param_2 + 1);
          puVar6 = (uint *)((ulonglong)uVar7 >> 0x20);
          iVar2 = (int)uVar7 >> 0x1f;
        }
        goto LAB_2c54ed50;
      }
      *(undefined1 *)(param_2 + 7) = 0;
      puVar3 = (undefined1 *)FUN_2c48e3e8(uVar1);
      puStack_34 = auStack_2c;
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c658674(_DAT_2c54edf4);
      }
      uVar4 = FUN_2c66c4ec();
      uStack_38 = uVar4;
      if (uVar4 < 0x10) {
        puVar6 = auStack_2c;
        if (uVar4 == 1) {
          auStack_2c[0] = CONCAT31(auStack_2c[0]._1_3_,*puVar3);
        }
        else if (uVar4 != 0) goto LAB_2c54edc2;
      }
      else {
        puStack_34 = (uint *)FUN_2c54eb78(&uStack_38,0);
        auStack_2c[0] = uStack_38;
        puVar6 = puStack_34;
LAB_2c54edc2:
        FUN_2c674668(puVar6,puVar3,uVar4);
        puVar6 = puStack_34;
      }
      uVar4 = uStack_38;
      *(undefined1 *)((int)puVar6 + uStack_38) = 0;
      puVar6 = (uint *)param_2[1];
      if (puVar6 == param_2 + 3) {
        uVar5 = 0xf;
      }
      else {
        uVar5 = param_2[3];
      }
      uStack_30 = uStack_38;
      if (uVar5 < uStack_38) {
        puVar6 = (uint *)FUN_2c54eb78(&uStack_38);
        if (param_2 + 3 != (uint *)param_2[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        param_2[1] = (uint)puVar6;
        param_2[3] = uStack_38;
      }
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          *(char *)puVar6 = (char)*puStack_34;
          puVar6 = (uint *)param_2[1];
        }
        else {
          FUN_2c674668(puVar6,puStack_34,uVar4);
          puVar6 = (uint *)param_2[1];
        }
      }
      param_2[2] = uVar4;
      *(undefined1 *)((int)puVar6 + uVar4) = 0;
      FUN_2c48e87c(puVar3);
      if (puStack_34 != auStack_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar2 = 0;
      puVar6 = puStack_34;
      goto LAB_2c54ed50;
    }
  }
  iVar2 = -1;
LAB_2c54ed50:
  if ((*_LAB_2c54ede8 ^ uStack_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar2,puVar6,*_LAB_2c54ede8 ^ uStack_1c,0);
}

