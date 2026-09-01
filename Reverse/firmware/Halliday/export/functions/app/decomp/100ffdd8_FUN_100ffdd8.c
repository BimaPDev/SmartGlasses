/* FUN_100ffdd8 @ 0x100ffdd8 */

int FUN_100ffdd8(undefined4 param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  int local_14 [2];
  
  local_14[0] = 0;
  bVar1 = FUN_100fb024(param_1,local_14);
  if (local_14[0] == 0) {
    if (bVar1 == 0xfd) {
      uVar2 = FUN_100fb070(param_1,local_14);
      if (local_14[0] == 0) {
LAB_100ffe16:
        *param_2 = uVar2;
        return 0;
      }
    }
    else if (bVar1 == 0xff) {
      bVar1 = FUN_100fb024(param_1,local_14);
      if (local_14[0] == 0) {
        uVar2 = bVar1 + 0xfd;
        goto LAB_100ffe16;
      }
    }
    else if (bVar1 == 0xfe) {
      bVar1 = FUN_100fb024(param_1,local_14);
      if (local_14[0] == 0) {
        *param_2 = bVar1 + 0x1fa;
      }
    }
    else {
      *param_2 = (ushort)bVar1;
    }
  }
  return local_14[0];
}

