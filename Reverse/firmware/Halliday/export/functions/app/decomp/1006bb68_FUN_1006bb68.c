/* FUN_1006bb68 @ 0x1006bb68 */

int FUN_1006bb68(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int local_1c;
  
  iVar6 = param_1;
  uVar7 = param_3;
  local_1c = param_4;
  if (((param_2 == (char *)0x0) || (uVar1 = FUN_1011ea10(param_2), uVar1 < 2)) || (*param_2 != '/'))
  {
    FUN_100a5b78((DAT_1006bc18 - DAT_1006bc14) * 0x20 & 0xff00U | 0xb70011,DAT_1006bc20,DAT_1006bc1c
                 ,DAT_1006bc14,iVar6,param_2,uVar7);
    return -0x16;
  }
  iVar2 = FUN_1006b9f4(&local_1c,param_2,0);
  if (iVar2 < 0) {
    uVar1 = (DAT_1006bc18 - DAT_1006bc14) * 0x20 & 0xff00U | 0xbd0000;
    uVar4 = DAT_1006bc24;
    iVar3 = DAT_1006bc28;
  }
  else {
    *(int *)(param_1 + 4) = local_1c;
    pcVar5 = *(code **)(*(int *)(local_1c + 0x1c) + 0x4c);
    if (pcVar5 == (code *)0x0) {
      return iVar2;
    }
    iVar3 = (*pcVar5)(param_1,param_2,param_3,param_4);
    if (-1 < iVar3) {
      return iVar3;
    }
    uVar1 = (DAT_1006bc18 - DAT_1006bc14) * 0x20 & 0xff00U | 0xc60000;
    uVar4 = DAT_1006bc2c;
    iVar2 = iVar3;
  }
  FUN_100a5b78(uVar1 | 0x11,DAT_1006bc20,uVar4,iVar3,iVar6,param_2,uVar7);
  return iVar2;
}

