/* FUN_2c5b5f64 @ 0x2c5b5f64 */

void FUN_2c5b5f64(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *local_4c;
  undefined4 uStack_48;
  undefined1 local_44 [16];
  undefined1 *local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  int local_1c;
  
  local_1c = *DAT_2c5b6318;
  if (param_2 != 0) {
    *(int *)(*(int *)(param_1 + 4) + 4) = param_2;
    uVar1 = FUN_2c606a10(param_2);
    FUN_2c606abc(uVar1,0x10);
    FUN_2c606abc(uVar1,2);
    FUN_2c606d60(uVar1,0xff000000,0);
    FUN_2c606d6c(uVar1,0);
    FUN_2c606d9c(uVar1,0);
    FUN_2c606d30(uVar1,0);
    FUN_2c606d3c(uVar1,0);
    FUN_2c606d18(uVar1,0);
    FUN_2c606d24(uVar1,0);
    FUN_2c606e68(uVar1,0);
    FUN_2c607048(uVar1,0x27d1,0x50);
    FUN_2c6072b4(uVar1,7);
    uVar2 = FUN_2c6313f4(uVar1);
    FUN_2c607048(uVar2,0x50);
    FUN_2c6072b4(uVar2,4);
    uVar3 = DAT_2c5b6388;
    if ((param_3 != 0) && (uVar5 = *(int *)(param_3 + 4) - 2, uVar5 < 0x13)) {
      uVar3 = *(undefined4 *)(DAT_2c5b631c + uVar5 * 4);
    }
    uVar3 = FUN_2c5e2e8c(uVar3);
    FUN_2c63140c(uVar2,uVar3);
    FUN_2c606d6c(uVar2,0);
    FUN_2c606d60(uVar2,0xff000000,0);
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = uVar2;
    uVar3 = FUN_2c606a10(uVar1);
    FUN_2c606abc(uVar3,0x10);
    FUN_2c606abc(uVar3,2);
    FUN_2c606d60(uVar3,0xff000000,0);
    FUN_2c606d6c(uVar3,0);
    FUN_2c606d9c(uVar3,0);
    FUN_2c606d30(uVar3,0);
    FUN_2c606d3c(uVar3,0);
    FUN_2c606d18(uVar3,0);
    FUN_2c606d24(uVar3,0);
    FUN_2c606e68(uVar3,0);
    FUN_2c607048(uVar3,0x27d1,0x50);
    FUN_2c6072bc(uVar3,7,0x54,0);
    uVar1 = FUN_2c637344(uVar3);
    iVar4 = DAT_2c5b6394;
    if (param_3 != 0) {
      iVar4 = param_3 + 0x14;
    }
    FUN_2c638730(uVar1,iVar4);
    if (param_4 == 0) {
      uVar2 = 0x78;
    }
    else {
      uVar2 = 0xd8;
    }
    FUN_2c607048(uVar1,uVar2,0x1c);
    FUN_2c6388dc(uVar1,4);
    uVar2 = FUN_2c5e2e80(DAT_2c5b6320);
    FUN_2c606e38(uVar1,uVar2,0);
    FUN_2c606e20(uVar1,0xff00ff00,0);
    FUN_2c6072bc(uVar1,4,0,0xfffffffe);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = uVar1;
    uVar3 = FUN_2c606a10(uVar3);
    FUN_2c607048(uVar3,0x27d1,0x34);
    FUN_2c606abc(uVar3,0x10);
    FUN_2c606abc(uVar3,2);
    FUN_2c606d60(uVar3,0xff000000,0);
    FUN_2c606d6c(uVar3,0);
    FUN_2c606d30(uVar3,0);
    FUN_2c606d3c(uVar3,0);
    FUN_2c606d18(uVar3,0);
    FUN_2c606d24(uVar3,0);
    FUN_2c606d9c(uVar3,0);
    FUN_2c606e68(uVar3,0);
    FUN_2c627e28(uVar3,0);
    FUN_2c627e50(uVar3,3,2);
    FUN_2c606d54(uVar3,4,0);
    FUN_2c6072b4(uVar3,1);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c) = uVar3;
    uVar1 = FUN_2c637344(uVar3);
    FUN_2c607048(uVar1,0x27d1,0x34);
    uVar2 = FUN_2c5e2e80(DAT_2c5b6324);
    FUN_2c606e38(uVar1,uVar2,0);
    FUN_2c606e20(uVar1,0xff00ff00,0);
    FUN_2c606e5c(uVar1,2,0);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10) = uVar1;
    uVar3 = FUN_2c606a10(uVar3);
    FUN_2c607048(uVar3,0x27d1,0x34);
    FUN_2c606abc(uVar3,0x10);
    FUN_2c606abc(uVar3,2);
    FUN_2c606d60(uVar3,0xff000000,0);
    FUN_2c606d6c(uVar3,0);
    FUN_2c606d30(uVar3,0);
    FUN_2c606d3c(uVar3,0);
    FUN_2c606d18(uVar3,0);
    FUN_2c606d24(uVar3,0);
    FUN_2c606d9c(uVar3,0);
    FUN_2c606e68(uVar3,0);
    uVar2 = FUN_2c637344(uVar3);
    FUN_2c607048(uVar2,0x27d1,0x1c);
    uVar3 = FUN_2c5e2e80(DAT_2c5b6320);
    FUN_2c606e38(uVar2,uVar3,0);
    FUN_2c606e20(uVar2,0xff00ff00,0);
    FUN_2c606e2c(uVar2,0xcc,0);
    FUN_2c6072bc(uVar2,4,0,0xfffffffb);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = uVar2;
    uVar3 = DAT_2c5b6328;
    if (param_3 == 0) {
      FUN_2c638730(uVar1,DAT_2c5b638c);
      if (*DAT_2c5b6384 == local_1c) {
        FUN_2c638730(uVar2,DAT_2c5b6390,0,0);
        return;
      }
      goto LAB_2c5b637e;
    }
    *(undefined1 *)(param_1 + 0xc0) = 0;
    local_44[0] = 0;
    local_30 = 0;
    local_2c[0] = 0;
    uStack_48 = 0;
    local_4c = local_44;
    local_34 = local_2c;
    FUN_2c5b4728(*(undefined4 *)(param_3 + 0x94),&local_4c,&local_34,uVar3);
    FUN_2c638730(uVar1,local_4c);
    FUN_2c638730(uVar2,local_34);
    if (local_34 != local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_4c != local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
  }
  if (*DAT_2c5b6384 == local_1c) {
    return;
  }
LAB_2c5b637e:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

