/* FUN_2c4e29bc @ 0x2c4e29bc */

int FUN_2c4e29bc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_34;
  int *local_30;
  int local_2c;
  
  local_2c = *DAT_2c4e2c54;
  iVar7 = param_1[0x41];
  iVar6 = param_2;
  do {
    if (iVar6 == 0) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x69,0x602);
      iVar6 = param_1[0x23];
      uVar3 = FUN_2c4e1650(param_1);
      FUN_2c4e0504(DAT_2c4e2c80,0,0,0,DAT_2c4e2c60,0x69,DAT_2c4e2c5c,0x1300,DAT_2c4e2c7c,iVar6,
                   param_2,uVar3);
      iVar1 = 0;
LAB_2c4e2a78:
      if (*DAT_2c4e2c54 != local_2c) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return iVar1;
    }
    local_34 = 0;
    local_30 = (int *)FUN_2c4e4498(iVar7,&local_34);
    if (local_34 == 0) {
      iVar1 = FUN_2c4e4558(iVar7);
      if (iVar1 == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x40,0x200);
        uVar5 = 0x40;
        uVar3 = DAT_2c4e2c58;
        goto LAB_2c4e2a24;
      }
      local_30 = (int *)FUN_2c4e4498(iVar7,&local_34);
      if (local_30 == (int *)0x0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x42,0x200);
        uVar5 = 0x42;
        uVar3 = DAT_2c4e2c68;
      }
      else {
        if (local_34 != 0) goto LAB_2c4e2ab8;
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x43,0x200);
        uVar5 = 0x43;
        uVar3 = DAT_2c4e2c70;
      }
      uVar4 = 6;
      uVar2 = DAT_2c4e2c6c;
LAB_2c4e2a74:
      iVar1 = 0;
      FUN_2c4e0504(uVar2,uVar4,0,0,DAT_2c4e2c60,uVar5,DAT_2c4e2c5c,0x1300,uVar3);
      goto LAB_2c4e2a78;
    }
LAB_2c4e2ab8:
    piVar8 = local_30;
    if (local_34 < param_1[0x6b]) {
      piVar8 = param_1 + 0x5d;
      FUN_2c674668(piVar8,local_30);
      local_30 = piVar8;
      FUN_2c4e442c(iVar7,0x7fffffff);
      iVar1 = FUN_2c4e4558(iVar7);
      if (iVar1 == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x49,0x200);
        uVar5 = 0x49;
        uVar3 = DAT_2c4e2c58;
      }
      else {
        iVar1 = FUN_2c4e4508(iVar7,(int)local_30 + local_34,param_1[0x6b] + -1);
        if (iVar1 != 0) {
          if (param_1[0x6b] + -1 == iVar1) {
            iVar1 = FUN_2c4e2974(param_1,&local_30,(int)local_30 + local_34);
            if (iVar1 == 0) goto LAB_2c4e2bfc;
            param_1[0x5b] = local_34 - ((int)local_30 - (int)piVar8);
            goto LAB_2c4e2bb8;
          }
          iVar1 = 0;
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x4c,0x200);
          FUN_2c4e0504(DAT_2c4e2c64,2,0,0,DAT_2c4e2c60,0x4c,DAT_2c4e2c5c,0x1300,DAT_2c4e2c78);
          goto LAB_2c4e2a78;
        }
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x4b,0x200);
        uVar5 = 0x4b;
        uVar3 = DAT_2c4e2c74;
      }
LAB_2c4e2a24:
      uVar4 = 2;
      uVar2 = DAT_2c4e2c64;
      goto LAB_2c4e2a74;
    }
    iVar1 = FUN_2c4e2974(param_1,&local_30,((local_34 + 1) - param_1[0x6b]) + (int)local_30);
    FUN_2c4e442c(iVar7,(int)local_30 - (int)piVar8);
    if (iVar1 != 0) {
      param_1[0x5b] = 0;
LAB_2c4e2bb8:
      param_1[0x5c] = (int)local_30;
      if (param_3 != 0) {
        FUN_2c674668(param_3,local_30,param_1[0x6b]);
        param_1[0x5c] = param_3;
      }
      goto LAB_2c4e2a78;
    }
LAB_2c4e2bfc:
    iVar6 = iVar6 + -1;
  } while( true );
}

