/* FUN_100c050c @ 0x100c050c */

void FUN_100c050c(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_24 [16];
  
  switch(*param_1) {
  case 0:
    uVar1 = DAT_100c056c;
    break;
  case 1:
    uVar1 = DAT_100c0574;
    break;
  case 2:
    uVar1 = DAT_100c0578;
    break;
  case 3:
    uVar1 = DAT_100c057c;
    break;
  default:
    FUN_10119ddc(auStack_24,10,DAT_100c0580);
    goto LAB_100c052e;
  }
  FUN_1011e9f0(auStack_24,uVar1);
LAB_100c052e:
  FUN_10119ddc(param_2,param_3,DAT_100c0570,param_1[6],param_1[5],param_1[4],param_1[3],param_1[2],
               param_1[1],auStack_24);
  return;
}

