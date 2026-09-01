/* FUN_100e782c @ 0x100e782c */

undefined4 FUN_100e782c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1013662e();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_100a5b78((DAT_100e788c - DAT_100e7888) * 0x20 & 0xff00U | 0x1b0032,DAT_100e7890,param_2,
               param_3,param_4);
  switch(param_2) {
  case 0x44:
    uVar2 = 0;
    break;
  default:
    goto switchD_100e785e_caseD_45;
  case 0x46:
    uVar2 = 1;
    break;
  case 0x4b:
    uVar2 = 3;
    break;
  case 0x4c:
    uVar2 = 4;
  }
  (*(code *)*DAT_100e7894)(param_1,uVar2,param_3);
switchD_100e785e_caseD_45:
  return 1;
}

