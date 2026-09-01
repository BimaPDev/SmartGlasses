/* FUN_10127bec @ 0x10127bec */

int FUN_10127bec(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_5 + 0x10);
  iVar6 = *(int *)(param_5 + 0xc);
  iVar7 = param_3 - iVar6;
  iVar4 = *(int *)(param_5 + 0x14);
  iVar3 = param_2;
  if (iVar2 < 0xb4) {
    if (iVar4 < 0xb4) {
      if (iVar2 == 0) {
LAB_10127dae:
        if (param_3 < iVar6) {
          iVar2 = 3;
        }
        else {
          iVar2 = 1;
        }
        goto LAB_10127d98;
      }
      if ((iVar4 != 0) && (iVar4 < iVar2)) {
        if (param_3 < iVar6) {
          return 1;
        }
        iVar6 = iVar7 * *(int *)(param_5 + 0x3c) + *(int *)(param_5 + 0x3c);
        uVar5 = iVar6 >> 10;
        uVar1 = iVar6 >> 0x1f;
        if (iVar2 - 1U < 0x5a) {
          uVar5 = uVar5 & ~uVar1;
        }
        else if (iVar2 - 0x5bU < 0xb3) {
          uVar5 = uVar5 & uVar1;
        }
        if (iVar4 - 1U < 0x5a) {
          uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
        }
        else if (iVar4 - 0x5bU < 0xb3) {
          uVar5 = uVar5 & (int)uVar5 >> 0x1f;
        }
        uVar5 = (*(int *)(param_5 + 8) - param_2) + uVar5 +
                ((int)((*(int *)(param_5 + 0x74) * iVar7 >> 10) - uVar5) >> 1);
        if ((int)param_4 <= (int)uVar5) {
          uVar5 = param_4;
        }
        if ((int)uVar5 < 1) {
          iVar2 = 1;
        }
        else {
          iVar2 = FUN_10127882(param_1,param_2,param_3,uVar5,param_5 + 0x18,param_2);
          if (iVar2 == 0) {
            FUN_1012787a(param_1,uVar5);
          }
        }
        if ((int)param_4 <= (int)uVar5) {
          uVar5 = param_4;
        }
        uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
        param_5 = param_5 + 0x50;
        goto LAB_10127ca8;
      }
    }
    else if (iVar2 == 0) goto LAB_10127dae;
    if (iVar6 <= param_3) goto LAB_10127dbc;
LAB_10127dd6:
    iVar2 = 3;
  }
  else if (iVar2 == 0xb4) {
    if (param_3 < iVar6) {
      iVar2 = 1;
    }
    else {
      iVar2 = 3;
    }
  }
  else {
    if ((0xb4 < iVar4) && (iVar4 < iVar2)) {
      if (iVar6 < param_3) {
        return 1;
      }
      iVar6 = iVar7 * *(int *)(param_5 + 0x3c) + *(int *)(param_5 + 0x3c);
      uVar5 = iVar6 >> 10;
      uVar1 = iVar6 >> 0x1f;
      if (iVar2 - 0x10fU < 0x59) {
        uVar5 = uVar5 & ~uVar1;
      }
      else if (iVar2 - 0x5bU < 0xb3) {
        uVar5 = uVar5 & uVar1;
      }
      if (iVar4 - 0x10fU < 0x59) {
        uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
      }
      else if (iVar4 - 0x5bU < 0xb3) {
        uVar5 = uVar5 & (int)uVar5 >> 0x1f;
      }
      uVar5 = (*(int *)(param_5 + 8) - param_2) + uVar5 +
              ((int)((*(int *)(param_5 + 0x74) * iVar7 >> 10) - uVar5) >> 1);
      if ((int)param_4 <= (int)uVar5) {
        uVar5 = param_4;
      }
      if ((int)uVar5 < 1) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_10127882(param_1,param_2,param_3,uVar5,param_5 + 0x50,param_2);
        if (iVar2 == 0) {
          FUN_1012787a(param_1,uVar5);
        }
      }
      if ((int)param_4 <= (int)uVar5) {
        uVar5 = param_4;
      }
      uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
      param_5 = param_5 + 0x18;
LAB_10127ca8:
      iVar3 = FUN_10127882(param_1 + uVar5,uVar5 + param_2,param_3,param_4 - uVar5,param_5,iVar3);
      if (iVar3 == 0) {
        FUN_1012787a(param_1 + uVar5,param_4 - uVar5);
      }
      if (iVar2 != iVar3) {
        return 2;
      }
      return iVar3;
    }
    if (iVar6 <= param_3) goto LAB_10127dd6;
LAB_10127dbc:
    iVar2 = FUN_10127882(param_1,param_2,param_3,param_4,param_5 + 0x18,param_2);
  }
LAB_10127d98:
  iVar7 = *(int *)(param_5 + 0x14);
  iVar6 = *(int *)(param_5 + 0xc);
  iVar4 = iVar2;
  if (iVar7 == 0xb4) {
    if (param_3 < iVar6) {
      iVar3 = 3;
    }
    else {
      iVar3 = 1;
    }
    goto joined_r0x10127e00;
  }
  if (iVar7 == 0) {
    if (param_3 < iVar6) {
      iVar3 = 1;
    }
    else {
      iVar3 = 3;
    }
    goto joined_r0x10127e00;
  }
  if (iVar7 < 0xb4) {
    if (param_3 < iVar6) {
LAB_10127e14:
      iVar3 = 3;
      goto joined_r0x10127e00;
    }
  }
  else if (iVar6 <= param_3) goto LAB_10127e14;
  iVar3 = FUN_10127882(param_1,param_2,param_3,param_4,param_5 + 0x50,iVar3);
  iVar4 = iVar3;
  if (iVar2 == 0) {
    return 0;
  }
joined_r0x10127e00:
  if (iVar4 == 0) {
    return 0;
  }
  if (iVar2 == 3) {
    if (iVar3 == 3) {
      return 0;
    }
  }
  else if ((iVar2 == 1) && (iVar3 == 1)) {
    return 1;
  }
  return 2;
}

