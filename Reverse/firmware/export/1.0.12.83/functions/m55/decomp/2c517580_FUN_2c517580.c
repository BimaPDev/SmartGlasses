/* FUN_2c517580 @ 0x2c517580 */

void FUN_2c517580(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_34 [2];
  short local_32;
  int local_30;
  int iStack_2c;
  short local_24 [2];
  short local_20;
  int local_1c;
  
  local_1c = *DAT_2c517718;
  iVar1 = FUN_2c5e31b4(0x3f,&local_30,param_3,0);
  if (iVar1 != 0) {
    if (local_30 == 1 && iStack_2c == 0) {
      iVar1 = FUN_2c5e2e80(DAT_2c517720);
      uVar6 = DAT_2c517734;
      param_1[0x13] = iVar1;
      iVar1 = FUN_2c5e2e80(uVar6);
      param_1[0x1d] = iVar1;
    }
    else {
      iVar1 = FUN_2c5e2e80(DAT_2c51771c);
      uVar6 = DAT_2c517720;
      param_1[0x13] = iVar1;
      iVar1 = FUN_2c5e2e80(uVar6);
      param_1[0x1d] = iVar1;
    }
  }
  if (*(char *)((int)param_1 + 0xbe) != '\0') {
    iVar5 = *param_1;
    uVar6 = *(undefined4 *)(iVar5 + 0x1c);
    iVar7 = *(int *)(iVar5 + 0x14);
    FUN_2c60747c(uVar6,local_24);
    iVar1 = (int)(short)((local_20 + 1) - local_24[0]);
    if (0 < iVar1) {
      uVar2 = registry_lookup(DAT_2c517724);
      FUN_2c62b954(auStack_34,uVar2,param_1[0x13],(int)*(short *)((int)param_1 + 0x66),
                   (int)(short)param_1[0x19],iVar1,*(undefined1 *)((int)param_1 + 0x6f));
      *(short *)(param_1 + 0x2a) = local_32;
      *(short *)((int)param_1 + 0xaa) = local_32;
      pcVar3 = (char *)FUN_2c63736c(*(undefined4 *)(iVar5 + 0x24));
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        FUN_2c62b954(auStack_34,pcVar3,param_1[0x13],(int)*(short *)((int)param_1 + 0x66),
                     (int)(short)param_1[0x19],iVar1,*(undefined1 *)((int)param_1 + 0x6f));
        if ((short)param_1[0x2a] < local_32) {
          *(short *)(param_1 + 0x2a) = local_32;
        }
      }
      if (*(char *)(iVar7 + 4) == '\0') {
        iVar5 = registry_lookup(DAT_2c517738);
        param_1[0x2b] = iVar5;
      }
      else {
        iVar5 = registry_lookup(DAT_2c517728);
        param_1[0x2b] = iVar5;
      }
      iVar5 = FUN_2c66c4ec();
      if (param_1[0x2c] != 0) {
        FUN_2c62bea8();
      }
      puVar4 = (undefined1 *)lv_mem_alloc(iVar5 + 1);
      param_1[0x2c] = (int)puVar4;
      *puVar4 = 0;
      param_1[0x2d] = iVar5;
      if (((char)param_1[0x32] == '\x02') || (iVar5 < param_1[0x2e])) {
        param_1[0x2e] = iVar5;
      }
      FUN_2c62b954(auStack_34,param_1[0x2b],param_1[0x1d],(int)*(short *)((int)param_1 + 0x8e),
                   (int)(short)param_1[0x23],iVar1,*(undefined1 *)((int)param_1 + 0x97));
      *(short *)(param_1 + 0x2f) = local_32;
      if (param_1[0x31] != 0) {
        FUN_2c510738(uVar6);
      }
      iVar1 = FUN_2c51065c(uVar6,param_1,DAT_2c517730,DAT_2c51772c,0,0);
      param_1[0x31] = iVar1;
    }
  }
  if (*DAT_2c517718 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

