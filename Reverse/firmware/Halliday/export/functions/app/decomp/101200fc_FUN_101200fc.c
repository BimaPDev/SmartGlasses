/* FUN_101200fc @ 0x101200fc */

void FUN_101200fc(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 *extraout_r2;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    **(uint **)*param_1 = **(uint **)*param_1 & 0xfffffff7;
    return;
  }
  uVar4 = FUN_1011ff66();
  cVar1 = FUN_1007ddd0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
  puVar3 = *(uint **)*extraout_r2;
  if (cVar1 == '\0') {
    uVar2 = *puVar3 & 0x7fffff0c;
  }
  else {
    uVar2 = DAT_1007df24;
    if (cVar1 != '\x01') {
      uVar2 = DAT_1007df28;
    }
    uVar2 = uVar2 & *puVar3;
  }
  *puVar3 = uVar2;
  return;
}

