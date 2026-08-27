/* FUN_2c66962c @ 0x2c66962c */

void FUN_2c66962c(uint *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint *local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  if (0x3b < *param_1) {
    FUN_2c66efe0(&local_20,*param_1,0x3c);
    uVar3 = param_1[1];
    if ((int)local_1c < 0) {
      uVar5 = local_1c + 0x3c;
    }
    else {
      *param_1 = local_1c;
      uVar5 = local_1c;
    }
    param_1[1] = uVar3 + (int)local_20;
    if ((int)local_1c < 0) {
      *param_1 = uVar5;
      param_1[1] = (uVar3 + (int)local_20) - 1;
    }
  }
  if (0x3b < param_1[1]) {
    FUN_2c66efe0(&local_20,param_1[1],0x3c);
    uVar3 = param_1[2];
    if ((int)local_1c < 0) {
      uVar5 = local_1c + 0x3c;
    }
    else {
      param_1[1] = local_1c;
      uVar5 = local_1c;
    }
    param_1[2] = uVar3 + (int)local_20;
    if ((int)local_1c < 0) {
      param_1[1] = uVar5;
      param_1[2] = (uVar3 + (int)local_20) - 1;
    }
  }
  if (0x17 < param_1[2]) {
    FUN_2c66efe0(&local_20,param_1[2],0x18);
    uVar3 = param_1[3];
    if ((int)local_1c < 0) {
      uVar5 = local_1c + 0x18;
    }
    else {
      param_1[2] = local_1c;
      uVar5 = local_1c;
    }
    param_1[3] = uVar3 + (int)local_20;
    if ((int)local_1c < 0) {
      param_1[2] = uVar5;
      param_1[3] = (uVar3 + (int)local_20) - 1;
    }
  }
  if (0xb < param_1[4]) {
    FUN_2c66efe0(&local_20,param_1[4],0xc);
    uVar3 = param_1[5];
    bVar6 = (int)local_1c < 0;
    if (bVar6) {
      local_1c = local_1c + 0xc;
    }
    else {
      param_1[4] = local_1c;
    }
    param_1[5] = uVar3 + (int)local_20;
    if (bVar6) {
      param_1[4] = local_1c;
      param_1[5] = (uVar3 + (int)local_20) - 1;
    }
  }
  iVar1 = DAT_2c6697d8;
  uVar3 = param_1[5];
  if ((uVar3 & 3) == 0) {
    if (uVar3 == ((int)uVar3 / 100) * 100) {
      if ((int)(uVar3 + 0x76c) % 400 == 0) {
        iVar4 = 0x1d;
      }
      else {
        iVar4 = 0x1c;
      }
    }
    else {
      iVar4 = 0x1d;
    }
  }
  else {
    iVar4 = 0x1c;
  }
  if ((int)param_1[3] < 1) {
    while ((int)param_1[3] < 1) {
      uVar3 = param_1[4];
      param_1[4] = uVar3 - 1;
      if (uVar3 - 1 == 0xffffffff) {
        uVar5 = param_1[5];
        uVar3 = uVar5 - 1;
        param_1[4] = 0xb;
        param_1[5] = uVar3;
        if ((uVar3 & 3) == 0) {
          if (uVar3 == ((int)uVar3 / 100) * 100) {
            if ((int)(uVar5 + 0x76b) % 400 == 0) {
              iVar4 = 0x1d;
            }
            else {
              iVar4 = 0x1c;
            }
          }
          else {
            iVar4 = 0x1d;
          }
        }
        else {
          iVar4 = 0x1c;
        }
      }
      iVar2 = iVar4;
      if (param_1[4] != 1) {
        iVar2 = *(int *)(iVar1 + param_1[4] * 4);
      }
      param_1[3] = iVar2 + param_1[3];
    }
  }
  else {
    while( true ) {
      uVar3 = param_1[4];
      iVar2 = iVar4;
      if (uVar3 != 1) {
        iVar2 = *(int *)(iVar1 + uVar3 * 4);
      }
      if ((int)param_1[3] <= iVar2) break;
      param_1[3] = param_1[3] - iVar2;
      param_1[4] = uVar3 + 1;
      if (uVar3 + 1 == 0xc) {
        uVar5 = param_1[5];
        uVar3 = uVar5 + 1;
        param_1[4] = 0;
        param_1[5] = uVar3;
        if ((uVar3 & 3) == 0) {
          if ((int)uVar3 % 100 == 0) {
            if ((int)(uVar5 + 0x76d) % 400 == 0) {
              iVar4 = 0x1d;
            }
            else {
              iVar4 = 0x1c;
            }
          }
          else {
            iVar4 = 0x1d;
          }
        }
        else {
          iVar4 = 0x1c;
        }
      }
    }
  }
  return;
}

