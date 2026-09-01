/* FUN_100295fc @ 0x100295fc */

void FUN_100295fc(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  undefined *unaff_r9;
  undefined *puVar5;
  char local_30 [12];
  int local_24;
  
  local_24 = *(int *)PTR_DAT_1002981c;
  uVar4 = unaff_r8;
  puVar5 = unaff_r9;
  if (param_1 == (undefined4 *)0x0) goto LAB_1002971e;
  unaff_r6 = FUN_1003f6f0();
  unaff_r5 = (**(code **)(PTR_DAT_10029820 + 8))();
  unaff_r7 = (**(code **)(PTR_DAT_10029824 + 8))();
  FUN_10029574(*param_1);
  puVar5 = PTR_DAT_10029838;
  if (param_1[4] != 0) {
    unaff_r8 = 0;
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    local_30[8] = '\0';
    local_30[9] = '\0';
    local_30[10] = '\0';
    local_30[0xb] = '\0';
    (**(code **)(PTR_DAT_10029838 + 0x10))(local_30,0xc);
    iVar2 = (**(code **)(DAT_10029828 + 8))();
    uVar4 = unaff_r8;
    if (iVar2 != 0x4c) goto LAB_1002972c;
    FUN_10124cea(param_1[4],1);
    unaff_r9 = puVar5;
  }
  while( true ) {
    if (param_1[7] != 0) {
      cVar1 = (**(code **)(PTR_DAT_1002982c + 0x24))();
      if (cVar1 == '\0') {
        FUN_10124cea(param_1[7],1);
        FUN_10124cea(param_1[8],1);
      }
      else {
        FUN_10124c20();
        FUN_10124c20(param_1[8],1);
        FUN_10097aec(param_1[8],PTR_s__d_10154a0d_0x34_10029830,cVar1);
        iVar2 = (**(code **)(DAT_10029828 + 8))();
        if (iVar2 == 0x4c) {
          FUN_101256e8(param_1[7],7,0x7e);
        }
        else {
          FUN_10089c2c(param_1[7],param_1[4],0x14,2,0);
        }
        FUN_10089c2c(param_1[8],param_1[7],0x14,0xfffffffa,0);
      }
    }
    if (param_1[3] != 0) {
      if (99 < unaff_r6) {
        unaff_r6 = 100;
      }
      unaff_r6 = unaff_r6 & 0xff;
      iVar2 = FUN_1003f71c();
      if (iVar2 == 0) {
        puVar3 = param_1 + (unaff_r6 / 10) * 3 + 0x3c;
      }
      else {
        puVar3 = param_1 + 0x5d;
      }
      FUN_10096730(param_1[2],puVar3);
      FUN_10097aec(param_1[3],PTR_s__d___1015a923_0x11_10029834,unaff_r6);
      FUN_101256e8(param_1[2],8,0xffffff88,0);
      FUN_10089c2c(param_1[3],param_1[2],0x14,0,0);
    }
    uVar4 = unaff_r8;
    puVar5 = unaff_r9;
    if (param_1[5] != 0) {
      if (unaff_r5 == 0) {
        FUN_1002e994(param_1[6],0);
        if (param_1[6] != 0) {
          FUN_10096730(param_1[6],param_1 + 0x33);
          FUN_101256e8(param_1[6],9,0,0);
        }
      }
      else {
        FUN_1002e994(param_1[6],1);
      }
      if (unaff_r7 == 0) {
        FUN_1002e994(param_1[5],0);
        if (param_1[5] != 0) {
          FUN_10096730(param_1[5],param_1 + 0x27);
          if (unaff_r5 == 0) {
            FUN_101256e8(param_1[6],9,(param_1[0x2d] & 0x1fffff) >> 10,0);
          }
          FUN_101256e8(param_1[5],9,0);
        }
      }
      else {
        FUN_1002e994(param_1[5],1);
      }
    }
LAB_1002971e:
    if (*(int *)PTR_DAT_1002981c == local_24) break;
    FUN_1013cdc0();
LAB_1002972c:
    iVar2 = (**(code **)(puVar5 + 0xc))();
    unaff_r8 = uVar4;
    if (iVar2 == 1) {
      for (; cVar1 = local_30[unaff_r8 & 0xff], cVar1 != '\0'; unaff_r8 = unaff_r8 + 1) {
        if ((0xf < (byte)(cVar1 + 0xbf)) ||
           (-1 < (int)((0x9001U >> (uint)(byte)(cVar1 + 0xbf)) << 0x1f))) {
          local_30[uVar4] = cVar1;
          uVar4 = uVar4 + 1 & 0xff;
        }
      }
      local_30[uVar4] = '\0';
    }
    FUN_10097998(param_1[4],local_30);
    FUN_101256e8(param_1[4],7,0x38,0);
    unaff_r9 = puVar5;
  }
  return;
}

