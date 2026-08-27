/* FUN_2c143098 @ 0x2c143098 */

undefined4
FUN_2c143098(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = param_2[4];
  if ((int)param_2[4] < (int)param_2[2]) {
    uVar4 = param_2[2];
  }
  *param_3 = uVar4;
  if (*(char *)((int)param_2 + 0x43) != '\0') {
    *param_3 = uVar4 + 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *param_3 = *param_3 + 2;
  }
  if ((*param_2 & 6) == 0) {
    for (iVar1 = 0; iVar1 < (int)(param_2[3] - *param_3); iVar1 = iVar1 + 1) {
      iVar3 = (*param_5)(param_1,param_4,(int)param_2 + 0x19,1);
      if (iVar3 == -1) goto LAB_2c143142;
    }
  }
  uVar5 = (uint)(*(char *)((int)param_2 + 0x43) != '\0');
  uVar4 = uVar5;
  if ((int)(*param_2 << 0x1a) < 0) {
    uVar4 = uVar5 + 2;
    *(undefined1 *)((int)param_2 + uVar5 + 0x43) = 0x30;
    *(undefined1 *)((int)param_2 + uVar5 + 0x44) = *(undefined1 *)((int)param_2 + 0x45);
  }
  iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x43,uVar4);
  if (iVar1 == -1) {
LAB_2c143142:
    uVar2 = 0xffffffff;
  }
  else {
    uVar4 = param_2[3];
    uVar5 = 0;
    bVar6 = (*param_2 & 6) == 4;
    if (bVar6) {
      uVar4 = uVar4 - *param_3;
    }
    if (bVar6) {
      uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
    }
    else {
      uVar4 = 0;
    }
    if ((int)param_2[4] < (int)param_2[2]) {
      uVar4 = uVar4 + (param_2[2] - param_2[4]);
    }
    for (; uVar4 != uVar5; uVar5 = uVar5 + 1) {
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x1a,1);
      if (iVar1 == -1) goto LAB_2c143142;
    }
    uVar2 = 0;
  }
  return uVar2;
}

