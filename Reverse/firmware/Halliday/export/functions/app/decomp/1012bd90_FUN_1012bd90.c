/* FUN_1012bd90 @ 0x1012bd90 */

void FUN_1012bd90(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  for (; 0xe0f < (int)param_2; param_2 = (uint)(short)((short)param_2 + -0xe10)) {
  }
  for (; (int)param_2 < 0; param_2 = (uint)(short)((short)param_2 + 0xe10)) {
  }
  if (param_2 != *(ushort *)(param_1 + 0x40)) {
    FUN_10089bf8(param_1);
    uVar1 = FUN_10125786(param_1);
    uVar2 = FUN_10125790(param_1);
    FUN_1012809a(&local_28,uVar1,uVar2,(int)*(short *)(param_1 + 0x40),
                 *(undefined2 *)(param_1 + 0x4c),param_1 + 0x44);
    local_28 = local_28 + *(int *)(param_1 + 0x14);
    local_24 = local_24 + *(int *)(param_1 + 0x18);
    local_20 = *(int *)(param_1 + 0x14) + local_20;
    local_1c = *(int *)(param_1 + 0x18) + local_1c;
    FUN_10125ab8(param_1,&local_28);
    *(short *)(param_1 + 0x40) = (short)param_2;
    uVar3 = FUN_1008af34(param_1);
    FUN_10086d38(uVar3,0);
    FUN_1012543e(param_1);
    FUN_10086d38(uVar3,1);
    FUN_1012809a(&local_28,uVar1,uVar2,(int)*(short *)(param_1 + 0x40),
                 *(undefined2 *)(param_1 + 0x4c),param_1 + 0x44);
    local_28 = local_28 + *(int *)(param_1 + 0x14);
    local_24 = local_24 + *(int *)(param_1 + 0x18);
    local_1c = local_1c + *(int *)(param_1 + 0x18);
    local_20 = local_20 + *(int *)(param_1 + 0x14);
    FUN_10125ab8(param_1,&local_28);
  }
  return;
}

