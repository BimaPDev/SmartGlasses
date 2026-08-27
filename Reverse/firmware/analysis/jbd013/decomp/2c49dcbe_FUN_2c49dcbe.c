/* FUN_2c49dcbe @ 0x2c49dcbe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c49dcbe(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar4 = _LAB_2c49de44;
  uVar3 = _LAB_2c49de34;
  puVar1 = _LAB_2c49de24;
  if (*(int *)(param_4 + 0x48) != 1) {
    return 0xffffffff;
  }
  switch(param_1) {
  case 0:
    *_LAB_2c49de20 = param_2;
    break;
  case 1:
    *_LAB_2c49de24 = param_2;
    break;
  case 2:
    *_LAB_2c49de28 = param_2;
    break;
  case 3:
    *_LAB_2c49de2c = param_2;
    break;
  case 4:
    *_LAB_2c49de30 = param_2;
    break;
  case 5:
    if (param_2 == 1) {
      FUN_2c49cd50(1);
      return 0;
    }
    if (param_2 == 2) {
      iVar5 = FUN_2c4eab7c();
      iVar5 = (**(code **)(iVar5 + 0x88))(100,1);
      if (iVar5 == 0) {
        uVar6 = 0x5d9;
        uVar7 = _LAB_2c49de4c;
LAB_2c49dda0:
                    /* WARNING: Subroutine does not return */
        TRACE(4,uVar6,_LAB_2c49de40,_LAB_2c49de3c,uVar7,0);
      }
    }
    else {
      if ((param_2 & 0x3000000) == 0) goto LAB_2c49dd0c;
      iVar5 = FUN_2c4eab7c();
      iVar5 = (**(code **)(iVar5 + 0x88))((param_2 & 0xffffff) >> 0x10,param_2 & 0xffff);
      if (iVar5 == 0) {
        uVar6 = 0x5ea;
        uVar7 = _LAB_2c49de38;
        goto LAB_2c49dda0;
      }
    }
    iVar5 = FUN_2c49dbb0();
    if (iVar5 == 0) {
      func_0x2c674368();
      return 0;
    }
  default:
LAB_2c49dd0c:
    break;
  case 0x13:
    if (param_2 == 1) {
      iVar5 = FUN_2c64418c(_LAB_2c49de48,1,0);
      *_LAB_2c49de44 = iVar5;
      if (iVar5 != 0) {
        FUN_2c6448b4(iVar5,1000);
        return 0;
      }
    }
    else if (param_2 == 0) {
      if (*_LAB_2c49de44 != 0) {
        FUN_2c644958();
        *piVar4 = 0;
        return 0;
      }
    }
    else if (param_2 == 2) {
      FUN_2c49c938();
      return 0;
    }
    goto LAB_2c49dd0c;
  case 0x28:
    *_LAB_2c49de20 = 0xffffffff;
    *puVar1 = uVar3;
    puVar2 = _LAB_2c49de30;
    puVar1 = _LAB_2c49de2c;
    *_LAB_2c49de28 = 0xffffffff;
    *puVar1 = uVar3;
    *puVar2 = 0xffffffff;
    break;
  case 0x2b:
    if ((param_2 & 0xff0000) != 0) {
      return 0xffffffff;
    }
    FUN_2c49c8c4((param_2 & 0xffff) >> 8,param_2 & 0xff);
    return (param_2 & 0xffffff) >> 0x10;
  }
  return 0;
}

