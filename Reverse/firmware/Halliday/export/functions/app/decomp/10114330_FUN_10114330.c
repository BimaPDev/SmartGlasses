/* FUN_10114330 @ 0x10114330 */

uint FUN_10114330(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((int)(uVar2 << 0x1e) < 0) {
    FUN_1013ca1a(param_2 + 2,0,1);
    *param_2 = 0;
    puVar1 = DAT_10114368;
    param_2[1] = param_1;
    if ((undefined4 *)puVar1[1] == (undefined4 *)0x0) {
      *puVar1 = param_2;
      puVar1[1] = param_2;
    }
    else {
      *(undefined4 *)puVar1[1] = param_2;
      puVar1[1] = param_2;
    }
  }
  return (uVar2 & 3) >> 1;
}

