/* FUN_100da9c4 @ 0x100da9c4 */

undefined4 FUN_100da9c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = CONCAT22((short)((uint)param_2 >> 0x10),0x801);
  uStack_8 = param_3;
  iVar1 = FUN_10136574();
  if (iVar1 == 0) {
    return 0xffffffea;
  }
  FUN_100d57b8(iVar1,&local_c,(int)&local_c + 1);
  if ((local_c & 0xff) == 1) {
    uVar2 = 0xf;
  }
  else {
    if ((local_c & 0xff) != 2) goto LAB_100da9ec;
    uVar2 = 0xb;
  }
  local_c = CONCAT31(local_c._1_3_,uVar2);
LAB_100da9ec:
  (*(code *)*DAT_100daa10)(2,&local_c,2,(code *)*DAT_100daa10,param_1);
  return 0;
}

