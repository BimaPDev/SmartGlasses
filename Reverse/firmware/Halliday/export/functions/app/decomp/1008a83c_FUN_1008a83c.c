/* FUN_1008a83c @ 0x1008a83c */

void FUN_1008a83c(int param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*DAT_1008a9a0 == '\0') {
    return;
  }
  FUN_10125af4();
  uVar2 = FUN_100949c0(param_3);
  uVar2 = uVar2 & 4;
  uVar3 = FUN_100949c0(param_3);
  uVar4 = FUN_100949c0(param_3);
  iVar5 = FUN_100949c0(param_3);
  param_2 = param_2 & 0xff0000;
  if (uVar2 != 0) {
    if ((((param_2 != 0xf0000) && (param_2 != 0)) &&
        (iVar7 = FUN_1012691c(param_1,0,4), iVar6 = DAT_1008a9a4, iVar7 != DAT_1008a9a4)) &&
       (iVar7 = FUN_1012691c(param_1,0,1), iVar7 != iVar6)) goto LAB_1008a912;
    FUN_10086f50(param_1,0x2a,0);
    FUN_101256b2(param_1);
  }
  if ((param_2 == 0xf0000) || (param_2 == 0)) {
    if (((param_3 == 0xffff) || (uVar2 != 0)) && (iVar6 = FUN_10126fae(param_1), iVar6 != 0)) {
      FUN_101256b2();
    }
    if (((param_2 == 0xf0000) || (param_2 == 0)) && (iVar5 << 0x1b < 0)) {
      iVar5 = FUN_1012691c(param_1,0,0x6e);
      if ((iVar5 == 0) && (iVar5 = FUN_1012691c(param_1,0,0x6d), iVar5 == 0x100)) {
        cVar1 = FUN_1012691c(param_1,0,0x61);
        if (cVar1 == -1) {
          cVar1 = FUN_1012691c(param_1,0,0x68);
          cVar1 = cVar1 != '\0';
        }
        else {
          cVar1 = '\x01';
        }
      }
      else {
        cVar1 = '\x02';
      }
      iVar5 = *(int *)(param_1 + 8);
      if (iVar5 == 0) {
        if (cVar1 == '\0') goto LAB_1008a912;
        FUN_10089398(param_1);
        iVar5 = *(int *)(param_1 + 8);
      }
      *(byte *)(iVar5 + 0x22) = *(byte *)(iVar5 + 0x22) & 0x3f | cVar1 << 6;
    }
  }
LAB_1008a912:
  if ((param_3 == 0xffff) || ((uVar3 & 2) != 0)) {
    FUN_1012543e(param_1);
  }
  FUN_10125af4(param_1);
  if (((param_3 == 0xffff) || (((uVar4 & 1) != 0 && ((uVar3 & 2) != 0 || uVar2 != 0)))) &&
     (param_2 != 0x10000)) {
    FUN_101268da(param_1);
    return;
  }
  return;
}

