note
	description: "[
				application execution
			]"
	date: "$Date: 2016-10-21 09:45:18 -0800 (Fri, 21 Oct 2016) $"
	revision: "$Revision: 99331 $"

class
	WEB_ANNUAL_REPORTS_EXECUTION


inherit



	WSF_ROUTED_EXECUTION



create
	make

feature {NONE} -- Initialization




feature -- Router

	setup_router
			-- Setup `router'
		local
			fhdl: WSF_FILE_SYSTEM_HANDLER
			form: FORM_HANDLER
			admin: ADMINISTRATION
		do
			create fhdl.make_hidden ("www")
			create form
			create admin
			fhdl.set_directory_index (<<"index.html">>)
			router.handle ("/form", form, router.methods_post)
			router.handle ("/administrator", admin, router.methods_get_post)
			router.handle ("/publications", admin, router.methods_get_post)
			router.handle ("/courses_taught", admin, router.methods_get_post)
			router.handle ("/students_supervised", admin, router.methods_get_post)
			router.handle ("/submitted_reports", admin, router.methods_get_post)
			router.handle ("", fhdl, router.methods_GET)
		end
end
