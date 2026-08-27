/* FUN_2c4e8584 @ 0x2c4e8584 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e8584(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_2c4e9354();
  iVar3 = *param_1;
  uVar2 = _LAB_2c4e8610;
  if (((iVar3 != 0) && (uVar2 = _LAB_2c4e8618, iVar3 != 1)) && (uVar2 = _LAB_2c4e8608, iVar3 != 2))
  {
    uVar2 = _LAB_2c4e860c;
  }
  (**(code **)(iVar1 + 0x58))
            (_LAB_2c4e8614,iVar3,SUB84((double)(float)param_1[1],0),
             (int)((ulonglong)(double)(float)param_1[1] >> 0x20),uVar2,(int)(float)param_1[2],
             (int)(float)param_1[3],(int)(float)param_1[4],(int)(float)param_1[5],
             (int)(float)param_1[6],(int)(float)param_1[7]);
  return;
}

