/* FUN_2c4e849e @ 0x2c4e849e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e849e(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iStack00000000;
  float fStack00000004;
  float fStack00000008;
  float fStack0000000c;
  float fStack00000010;
  float fStack00000014;
  float fStack00000018;
  float fStack0000001c;
  
  iStack00000000 = param_1;
  fStack00000004 = param_2;
  fStack00000008 = param_3;
  fStack0000000c = param_4;
  if (param_1 == 0) {
    if (*_LAB_2c4e856c != '\0') {
      iVar1 = FUN_2c4e9354();
      (**(code **)(iVar1 + 0x58))
                (_LAB_2c4e8580,_LAB_2c4e857c,SUB84((double)param_2,0),
                 (int)((ulonglong)(double)param_2 >> 0x20),(double)param_3,(double)param_4,
                 (double)fStack00000010,(double)fStack00000014,(double)fStack00000018,
                 (double)fStack0000001c);
    }
  }
  else if ((param_1 == 2) && (*_LAB_2c4e8570 != '\0')) {
    iVar1 = FUN_2c4e9354();
                    /* WARNING: Could not recover jumptable at 0x2c4e8518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x58))
              (_LAB_2c4e8578,_LAB_2c4e8574,SUB84((double)param_2,0),
               (int)((ulonglong)(double)param_2 >> 0x20));
    return;
  }
  return;
}

