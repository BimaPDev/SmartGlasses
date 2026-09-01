/* FUN_1011d3c2 @ 0x1011d3c2 */

void FUN_1011d3c2(byte *param_1,undefined4 *param_2)

{
  *param_1 = *(byte *)((int)param_2 + 3) ^ *param_1;
  param_1[1] = (byte)*(undefined2 *)((int)param_2 + 2) ^ param_1[1];
  param_1[2] = param_1[2] ^ (byte)((uint)*param_2 >> 8);
  param_1[3] = param_1[3] ^ (byte)*param_2;
  param_1[4] = *(byte *)((int)param_2 + 7) ^ param_1[4];
  param_1[5] = (byte)*(undefined2 *)((int)param_2 + 6) ^ param_1[5];
  param_1[6] = param_1[6] ^ (byte)((uint)param_2[1] >> 8);
  param_1[7] = param_1[7] ^ (byte)param_2[1];
  param_1[8] = *(byte *)((int)param_2 + 0xb) ^ param_1[8];
  param_1[9] = (byte)*(undefined2 *)((int)param_2 + 10) ^ param_1[9];
  param_1[10] = param_1[10] ^ (byte)((uint)param_2[2] >> 8);
  param_1[0xb] = param_1[0xb] ^ (byte)param_2[2];
  param_1[0xc] = *(byte *)((int)param_2 + 0xf) ^ param_1[0xc];
  param_1[0xd] = (byte)*(undefined2 *)((int)param_2 + 0xe) ^ param_1[0xd];
  param_1[0xe] = param_1[0xe] ^ (byte)((uint)param_2[3] >> 8);
  param_1[0xf] = param_1[0xf] ^ (byte)param_2[3];
  return;
}

