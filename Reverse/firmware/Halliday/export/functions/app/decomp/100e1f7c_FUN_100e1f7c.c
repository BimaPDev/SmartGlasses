/* FUN_100e1f7c @ 0x100e1f7c */

undefined4 FUN_100e1f7c(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  if ((((uVar1 == 0) || (*(int *)(param_1 + 2) == 0)) || ((uVar1 & 0x101) != 1)) ||
     (4 < (byte)param_1[1])) {
    uVar3 = 0xffffffea;
  }
  else {
    if (((byte)param_1[1] == 0) && (uVar1 != 1)) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    uVar6 = FUN_100e1594();
    if ((int)uVar6 == 0) {
      FUN_10113cfc(DAT_100e1fe0,(int)((ulonglong)uVar6 >> 0x20),0xffffffff,0xffffffff,param_4);
      puVar2 = DAT_100e1fe4;
      puVar5 = param_1 + 4;
      puVar4 = (undefined4 *)DAT_100e1fe4[1];
      param_1[4] = 0;
      param_1[5] = 0;
      if (puVar4 == (undefined4 *)0x0) {
        *puVar2 = puVar5;
        puVar2[1] = puVar5;
      }
      else {
        *puVar4 = puVar5;
        puVar2[1] = puVar5;
      }
      FUN_100e14a0();
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffff90;
    }
  }
  return uVar3;
}

