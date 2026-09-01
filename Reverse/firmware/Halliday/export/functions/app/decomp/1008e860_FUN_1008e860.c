/* FUN_1008e860 @ 0x1008e860 */

void FUN_1008e860(short *param_1,uint param_2,int param_3,code *param_4)

{
  short sVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  int *piVar4;
  undefined2 uVar5;
  
  piVar4 = DAT_1008e8c4;
  puVar3 = DAT_1008e8c0;
  puVar2 = DAT_1008e8bc;
  if (2 < *(byte *)(param_1 + 1)) {
    sVar1 = *param_1;
    if (((*DAT_1008e8b8 != sVar1) || ((uint)*DAT_1008e8c0 != (param_2 & 0xffff))) ||
       (*DAT_1008e8c4 != param_3)) {
      *DAT_1008e8b8 = sVar1;
      *puVar3 = (ushort)param_2;
      *piVar4 = param_3;
      uVar5 = (*param_4)(param_2,sVar1);
      *puVar2 = uVar5;
    }
    uVar5 = *puVar2;
    *(char *)param_1 = (char)uVar5;
    *(char *)((int)param_1 + 1) = (char)((ushort)uVar5 >> 8);
  }
  return;
}

