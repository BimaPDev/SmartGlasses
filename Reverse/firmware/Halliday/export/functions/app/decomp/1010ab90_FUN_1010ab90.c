/* FUN_1010ab90 @ 0x1010ab90 */

undefined4 * FUN_1010ab90(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_18;
  int local_14;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 8);
    puVar1 = (undefined4 *)FUN_100fb248(uVar2,0x278,&local_18);
    if (local_18 == 0) {
      puVar1[2] = uVar2;
      puVar1[0x6d] = 0x20;
      uVar2 = FUN_100fb280(uVar2,0x10,0,0x20,0,&local_14);
      puVar1[0x6e] = uVar2;
      if (local_14 == 0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[0x6f] = 0;
        puVar1[5] = 0;
        puVar1[0x62] = 0;
        puVar1[6] = 0;
        puVar1[99] = 0;
        return puVar1;
      }
      uVar2 = puVar1[2];
      puVar1[0x6f] = 0;
      FUN_100fb5cc(uVar2,puVar1[6]);
      puVar1[5] = 0;
      puVar1[6] = 0;
      FUN_100fb5cc(uVar2,puVar1[0x6e]);
      puVar1[0x6d] = 0;
      puVar1[0x6e] = 0;
      puVar1[0x6c] = 0;
      FUN_100fb5cc(uVar2,puVar1[99]);
      puVar1[0x62] = 0;
      puVar1[99] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_100fb5cc(uVar2,puVar1);
      if (local_14 == 0) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}

