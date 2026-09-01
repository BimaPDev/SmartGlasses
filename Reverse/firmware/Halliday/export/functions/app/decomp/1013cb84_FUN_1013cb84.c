/* FUN_1013cb84 @ 0x1013cb84 */

undefined4 FUN_1013cb84(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1013cb60(param_1,param_1);
  iVar1 = FUN_10114878((int)((ulonglong)uVar3 >> 0x20));
  if ((int)uVar3 == 0) {
    uVar2 = 0xffffff88;
  }
  else {
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0xffffffea;
    }
  }
  return uVar2;
}

