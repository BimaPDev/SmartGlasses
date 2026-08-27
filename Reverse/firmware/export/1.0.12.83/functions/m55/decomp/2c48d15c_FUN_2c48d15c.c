/* FUN_2c48d15c @ 0x2c48d15c */

undefined4 FUN_2c48d15c(undefined4 param_1,uint param_2,uint *param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_34 [2];
  undefined4 local_2c;
  uint *local_28;
  undefined4 local_24;
  
  puVar1 = DAT_2c48d28c;
  if (param_4 == 0) {
    local_34[0] = param_2;
    FUN_2c644044(*DAT_2c48d28c,0xffffffff);
    uVar3 = *DAT_2c48d290;
    if (uVar3 < 0x100000) {
      uVar2 = uVar3 + 1;
    }
    else {
      uVar2 = 1;
      uVar3 = 0;
    }
    uVar5 = *puVar1;
    *DAT_2c48d290 = uVar2;
    FUN_2c644080(uVar5);
    local_28 = local_34;
    local_24 = CONCAT22(local_24._2_2_,4);
    local_34[0] = uVar3;
  }
  else {
    local_24 = CONCAT22(local_24._2_2_,(short)param_4);
    local_34[0] = param_2;
    local_28 = param_3;
  }
  iVar7 = DAT_2c48d278;
  local_2c = CONCAT31(local_2c._1_3_,(char)param_1);
  iVar6 = 0;
  iVar4 = DAT_2c48d278;
  do {
    FUN_2c644044(*(undefined4 *)(iVar4 + 4),0xffffffff);
    if (*(char *)(iVar4 + 1) == '\0') {
      iVar8 = iVar7 + iVar6 * 0x14;
      *(undefined1 *)(iVar8 + 1) = 1;
      *(undefined4 *)(iVar8 + 0xc) = 0xf0000000;
      FUN_2c644080(*(undefined4 *)(iVar8 + 4));
      *(char *)(iVar7 + iVar6 * 0x14) = (char)param_1;
      *(uint *)(iVar8 + 0xc) = local_34[0];
      FUN_2c4f7174(local_2c,local_28,local_24);
      iVar4 = FUN_2c6471b4(*(undefined4 *)(iVar8 + 8),500);
      if (iVar4 == 0) {
        uVar5 = *(undefined4 *)(iVar8 + 0x10);
        iVar7 = iVar7 + iVar6 * 0x14;
        FUN_2c644044(*(undefined4 *)(iVar7 + 4),0xffffffff);
        *(undefined1 *)(iVar7 + 1) = 0;
        FUN_2c644080(*(undefined4 *)(iVar7 + 4));
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x212,DAT_2c48d288,DAT_2c48d284,DAT_2c48d294,DAT_2c48d27c,iVar4,param_1);
    }
    iVar6 = iVar6 + 1;
    FUN_2c644080(*(undefined4 *)(iVar4 + 4));
    iVar4 = iVar4 + 0x14;
  } while (iVar6 != 0x10);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x204,DAT_2c48d288,DAT_2c48d284,DAT_2c48d280,DAT_2c48d27c,param_1);
}

