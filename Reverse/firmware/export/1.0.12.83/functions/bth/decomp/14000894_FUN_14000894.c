/* FUN_14000894 @ 0x14000894 */

void FUN_14000894(uint param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *in_r12;
  
  while( true ) {
    *param_4 = *(undefined4 *)((int)param_4 + param_2);
    param_4[-1] = *(undefined4 *)((int)(param_4 + -1) + param_2);
    param_4[-2] = *(undefined4 *)((int)(param_4 + -2) + param_2);
    param_4[-3] = *(undefined4 *)((int)(param_4 + -3) + param_2);
    param_4[-4] = *(undefined4 *)((int)(param_4 + -4) + param_2);
    puVar2 = param_4 + -6;
    param_4[-5] = *(undefined4 *)((int)(param_4 + -5) + param_2);
    if (in_r12 == puVar2) break;
    *puVar2 = *(uint *)((int)puVar2 + param_2);
    param_4[-7] = *(undefined4 *)((int)(param_4 + -7) + param_2);
    param_4[-8] = *(undefined4 *)((int)(param_4 + -8) + param_2);
    param_4[-9] = *(undefined4 *)((int)(param_4 + -9) + param_2);
    param_4[-10] = *(undefined4 *)((int)(param_4 + -10) + param_2);
    param_4[-0xb] = *(undefined4 *)((int)(param_4 + -0xb) + param_2);
    param_4[-0xc] = *(undefined4 *)((int)(param_4 + -0xc) + param_2);
    param_4[-0xd] = *(undefined4 *)((int)(param_4 + -0xd) + param_2);
    puVar1 = param_4 + -0xf;
    param_4[-0xe] = *(undefined4 *)((int)(param_4 + -0xe) + param_2);
    param_4 = param_4 + -0x10;
    *puVar1 = *(undefined4 *)((int)puVar1 + param_2);
  }
  if ((param_1 & 3) != 0) {
    *puVar2 = (*puVar2 ^ *(uint *)((int)puVar2 + param_2)) & 0xffffffffU >> ((-param_1 & 3) << 3) ^
              *(uint *)((int)puVar2 + param_2);
  }
  return;
}

