/* FUN_10085330 @ 0x10085330 */

int FUN_10085330(undefined1 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 local_30;
  undefined1 *local_2c [2];
  undefined4 local_24 [2];
  
  local_30 = param_2;
  local_2c[0] = param_1;
  local_24[0] = param_2;
  uVar1 = FUN_10084444(local_24);
  iVar4 = DAT_100853fc;
  if ((int)uVar1 < 0) {
    return 0xb;
  }
  puVar5 = *(undefined1 **)(DAT_100853fc + uVar1 * 4);
  if (puVar5 == (undefined1 *)0x0) {
    if (local_2c[0] != (undefined1 *)0x0) {
      *local_2c[0] = 0;
      iVar2 = FUN_10086aa0(uVar1 & 0xff,local_2c[0] + 0x14);
      if (iVar2 == 0) {
        return 2;
      }
    }
    *(undefined1 **)(iVar4 + uVar1 * 4) = local_2c[0];
    if ((local_2c[0] != (undefined1 *)0x0) &&
       (*(undefined4 *)(local_2c[0] + 0x20) = 0, param_3 == 1)) {
      iVar2 = FUN_10084bcc(&local_30,local_2c,0);
      FUN_10122b7a(local_2c[0],iVar2);
      if (iVar2 != 0) {
        FUN_101242be(*(undefined4 *)(local_2c[0] + 0x14));
        *(undefined4 *)(iVar4 + uVar1 * 4) = 0;
        return iVar2;
      }
      return 0;
    }
  }
  else if (local_2c[0] == (undefined1 *)0x0) {
    FUN_10086338(puVar5[1],0,0);
    FUN_101242c2(*(undefined4 *)(puVar5 + 0x14));
    puVar3 = DAT_100853f8;
    *(undefined4 *)(iVar4 + uVar1 * 4) = 0;
    *puVar5 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      if (puVar5 == (undefined1 *)*puVar3) {
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0x10);
    FUN_10122b7a(puVar5,0);
    iVar4 = FUN_101242be(*(undefined4 *)(puVar5 + 0x14));
    if (iVar4 == 0) {
      return 2;
    }
  }
  return 0;
}

